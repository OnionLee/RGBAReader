#include "RGBAReader.h"


RGBAReader::RGBAReader()
{
}


RGBAReader::~RGBAReader()
{
}


sRGBA RGBAReader::getRGBAwithPos(sRGBA &temp, int x, int y)
{
	BYTE m_bRawdata[4];

	//���ϴ� ũ�⸸ŭ�� �ؽ��� ���� ������
	glReadPixels(
		x,
		y,
		1,
		1,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		m_bRawdata);

	temp.r = (int)m_bRawdata[0];
	temp.g = (int)m_bRawdata[1];
	temp.b = (int)m_bRawdata[2];
	temp.a = (int)m_bRawdata[3];

	return temp;
}


sRGBA * RGBAReader::getRGBAwithRect(sRGBA* m_pPixels, int x, int y, int w, int h)
{
	BYTE * m_bRawdata = new BYTE[w * h * 4];
	
	glReadPixels(
		x,
		y,
		w,
		h,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		m_bRawdata);

	int m_nPixelSize = w * h;
	for (int i = 0; i < w * h; i++)
	{
		int offset = i * 4;
		m_pPixels[i].r = (int)m_bRawdata[offset + 0];
		m_pPixels[i].g = (int)m_bRawdata[offset + 1];
		m_pPixels[i].b = (int)m_bRawdata[offset + 2];
		m_pPixels[i].a = (int)m_bRawdata[offset + 3];
	}

	delete m_bRawdata;

	return m_pPixels;
}
