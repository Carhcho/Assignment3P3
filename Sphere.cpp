#include "Sphere.h"

double Sphere::getArea()
{
	double sphereArea = 0.0;
	sphereArea = 4 * 3.14 * pow(radius, 2);
	return sphereArea;
}

double Sphere::getVolume()
{
	double sphereVolume = 0.0;
	sphereVolume = (4/3) * 3.14 * pow(radius, 3);
	return sphereVolume;
}

Sphere::Sphere(double radius)
{
	this->radius = radius;
}

void Sphere::print()
{
	cout << "Sphere" << endl;
	cout << "Area: " << getArea() << endl
		<< "Volume: " << getVolume() << endl;
}
