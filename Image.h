#pragma once
class Image
{
public:
	Image()
	{

	}
	Image(int x, int y, int r, int g, int b)
	{
		X = x;
		Y = y;
		R = r;
		G = g;
		b = b;

	}

	


	int X;
	int Y;
	int R;
	int G;
	int B;

	~Image()
	{

	}
};

