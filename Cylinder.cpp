#include "Cylinder.h"

void Cylinder::setHeight(double h)
{
    height = h;
}

int Cylinder::getHeight()
{
    return height;
}

double Cylinder::getArea()
{
    double cylinderArea = 0.0;
    cylinderArea = 2 * 3.14 * radius * height + 2 * 3.14 * pow(radius, 2);
    return cylinderArea;
}

double Cylinder::getVolume()
{
    double cylinderVolume = 0.0;
    cylinderVolume = height * 3.14 * pow(radius, 2);
    return cylinderVolume;
}

Cylinder::Cylinder(double height, double radius)
{
    this->height = height;
    this->radius = radius;
}

void Cylinder::print()
{
    cout << "Cylinder" << endl;
    cout << "Area: " << getArea() << endl
        << "Volume: " << getVolume() << endl;
}
