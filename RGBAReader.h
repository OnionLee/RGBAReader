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

	static RGBAReader* GetInstance()
	{
		static RGBAReader* inst = new RGBAReader;
		return inst;
	}
};

#define SCENE_PIXEL_BYTELOAD RGBAReader::GetInstance()