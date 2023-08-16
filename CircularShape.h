#pragma once
#include <string>
#include <iostream>
using namespace std;

class CircularShape
{
public:
	double radius = 0;
	double area = 0.0;
	double volume = 0.0;
	void setArea(double a);
	void setVolume(double v);
	void setRadius(double r);
	double getArea();
	double getVolume();
	virtual void print();
	CircularShape(double area, double volume, double radius);
	CircularShape();

};

