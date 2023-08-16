#pragma once
#include <string>
#include <iostream>
#include "CircularShape.h"
#include <math.h>
using namespace std;

class Cylinder : public CircularShape
{
public:
	double height = 0;
	void setHeight(double h);
	int getHeight();
	double getArea();
	double getVolume();
	Cylinder(double height, double radius);
	virtual void print();

};

