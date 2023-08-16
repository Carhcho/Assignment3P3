#pragma once
#include <string>
#include <iostream>
#include "CircularShape.h"
#include <math.h>
using namespace std;

class Sphere : public CircularShape
{
public:
	double getArea();
	double getVolume();
	Sphere(double radius);
	virtual void print();

};

