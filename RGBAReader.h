#pragma once
#include "cocos2d.h"

using namespace cocos2d;
struct sRGBA
{
	int r;
	int g;
	int b;
	int a;
};
class RGBAReader
{
public:
	RGBAReader();
	~RGBAReader();

	sRGBA getRGBAwithPos(int x, int y);
	sRGBA * getRGBAwithRect(int x, int y, int w, int h);

	sRGBA * getPixels() const { return m_pPixels; }
	int getPixelSize() const { return m_nPixelSize; }
	
	//다쓰면꼭 호출해주세요.
	void end();
private:
	sRGBA * m_pPixels;

	int m_nPixelSize;

};

