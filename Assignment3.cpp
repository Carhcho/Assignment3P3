#include <iostream>
#include "CircularShape.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "ShapeException.h"
using namespace std;

int main() {
	double height, radius, sphereRadius;
	
	
	do {
		cout << "First for the cylinder enter it's height: " << endl;
		cin >> height;
		cout << "Now enter the cylinder's radius: " << endl;
		cin >> radius;
		if (height < 0 || radius < 0) {
			try {
				throw ShapeException();
			}
			catch (ShapeException e) {
				cout << "ShapeException caught!" << endl;
				cout << e.error() << endl;
			}
		}
	} while (height < 0 || radius < 0);
	
	Cylinder shape1(height, radius);
	shape1.print();

	do {
		cout << "Then for the sphere enter it's radius: " << endl;
		cin >> sphereRadius;
		
		if (sphereRadius < 0) {
			try {
				throw ShapeException();
			}
			catch (ShapeException e) {
				cout << "ShapeException caught!" << endl;
				cout << e.error() << endl;
			}
		}
	} while (sphereRadius < 0);

	Sphere shape2(sphereRadius);
	shape2.print();
}
