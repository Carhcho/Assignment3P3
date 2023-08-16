#include "CircularShape.h"

void CircularShape::setArea(double a)
{
	area = a;
}

void CircularShape::setVolume(double v)
{
	volume = v;
}

void CircularShape::setRadius(double r)
{
	radius = r;
}

double CircularShape::getArea()
{
	return area;
}

double CircularShape::getVolume()
{
	return volume;
}

void CircularShape::print()
{
	cout << "Circular Shap" << endl;
	cout << "Area: " << getArea() << endl
		<< "Volume: " << getVolume() << endl;
}

CircularShape::CircularShape(double area, double volume, double radius)
{
	this->area = area;
	this->volume = volume;
	this->radius = radius;
}

CircularShape::CircularShape()
{
	this->area = area;
	this->volume = volume;
	this->radius = radius;
}
