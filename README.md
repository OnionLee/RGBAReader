RGBAReader
==========
###1. 원하는 화면의 픽셀 구하기
=============================



###2. 원하는 지정크기만큼의 픽셀 구하기
=============================
```
RGBAReader temp;

temp.getRGBAwithRect(touch->getLocation().x, touch->getLocation().y, 10, 10);
	

sRGBA * p_sRgba = new sRGBA[temp.getPixelSize()];
	
p_sRgba = temp.getPixels();
	
temp.end();
 ```

