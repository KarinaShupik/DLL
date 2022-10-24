#include "pch.h"
#include <utility>
#include <limits.h>
#include "Pointfuncsdll.h"
#include <iostream>
#include <math.h>

using namespace std;

namespace Pointfuncsdll {
	Point Point::Init(int x, int y)
	{
		Point tmp;
		tmp.x = x;
		tmp.y = y;
		return tmp;
	}

	Point Point::Read()
	{
		Point tmp;
		cout << "Input first point x: " << endl;
		cin >> tmp.x;
		cout << "Input first point y: " << endl;
		cin >> tmp.y;

		return tmp;
	}

	void Point::Display()
	{
		cout << "X:" << x << endl;
		cout << "Y:" << y << endl;


		cout << "Distance to origin (x, y):" << distanceToStartCoordinate() << endl;
		polarCoordinates();
		cout << "Moved Ox (x++):" << transferX() << endl;
		cout << "Moved Oy (y++):" << transferY() << endl;

	}

	char Point::toString()
	{
		float x1;
		float y1;
		cout << "Enter second point x:" << endl;
		cin >> x1;
		cout << "Enter second point y:" << endl;
		cin >> y1;

		float distanceToP = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
		string convertToString = to_string(distanceToP);
		cout << "Distance to point: " + convertToString << endl;

		//порівняння на збіг і розбіжність
		if (x == y && x1 == y1) {
			cout << "Dots match" << endl;
		}
		else {
			cout << "Dots don't match" << endl;
		}

		return 0;
	}

	Point::Point()
	{
		x = 0;
		y = 0;
	}

	Point::Point(float valueX, float valueY)
	{
		x = valueX;
		y = valueY;
	}

	Point& Point::operator++()
	{
		this->x++;
		this->y++;

		return *this;
	}

	Point& Point::operator--()
	{
		this->x--;
		this->y--;

		return *this;
	}

	bool Point::operator==(const Point& other)
	{
		if (this->x == other.x1 && this->y == other.y1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool Point::operator!=(const Point& other)
	{
		return !(this->x == other.x1 && this->y == other.y1);
	}

	float Point::distanceToStartCoordinate()
	{
		return sqrt(x * x + y * y);
	}

	float Point::polarCoordinates()
	{
		float r;//radius
		float phi;//angle

		r = sqrt(x * x + y * y);
		phi = tan(y / x);

		cout << "Polar coordinates (x, y):" << "(" << phi << "," << r << ")" << endl;

		return 0;
	}

	float Point::transferX()
	{
		x++;
		return x;
	}

	float Point::transferY()
	{
		y++;
		return y;
	}
}