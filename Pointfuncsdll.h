#ifdef POINTFUNCSDLL_EXPORTS
#define POINTFUNCSDLL_API __declspec(dllexport)
#else
#define POINTFUNCSDLL_API __declspec(dllimport)
#endif

#pragma once
#include<iostream>
#include<string>

namespace Pointfuncsdll {
	class Point
	{
	public:
		int x, y;
		int x1, y1;
		POINTFUNCSDLL_API Point Init(int x, int y);
		POINTFUNCSDLL_API Point Read();
		POINTFUNCSDLL_API void Display();
		POINTFUNCSDLL_API char toString();

		POINTFUNCSDLL_API Point();
		POINTFUNCSDLL_API Point(float valueX, float valueY);

		POINTFUNCSDLL_API Point& operator++ ();
		POINTFUNCSDLL_API Point& operator-- ();
		POINTFUNCSDLL_API bool operator== (const Point& other);
		POINTFUNCSDLL_API bool operator!= (const Point& other);

	private:
		POINTFUNCSDLL_API float distanceToStartCoordinate();
		POINTFUNCSDLL_API float polarCoordinates();
		POINTFUNCSDLL_API float transferX();
		POINTFUNCSDLL_API float transferY();
	};
}

