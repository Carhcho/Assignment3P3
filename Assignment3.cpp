/******************************************

Assignment 3

Design and implement a set of classes that define a series of three-dimensional geometric shapes. This design must use inheritance, one base class and at least two derived classes. For the shapes store fundamental data about its size and provide methods to access and modify the data. There should be data in the base class and in the derived classes. The data should be template data types, so that instances of the classes can be created with data types of int, double and float. The design should include methods to calculate the circumference, area and volume of the shapes.

An exception class should be created to indicate that one of the data member of the shape is negative. The exception should provide an appropriate message about what it wrong and which data member is wrong and its value. The exception should be thrown when doing the calculations. Main should throw the exception and handle the exception, which then allows the user to enter new value for the data so it can be corrected and the calculations are performed.

The driver class should create an instance of each of the derived classes. The driver should show that all of the method works correctly and the exceptions are handled correctly. The shapes should use different data types to create the instance (int, double, or float).

Author: Cesar Roncancio

Created : 11/14/2021

Revisions : 11/14/2021 I created the classes Cylinder and Sphere derived from CircularShape, the first two classes inherit from the last class. I also created the ShapeException class inheriting al properties from the exception class and created the method error that will show the custom error message.
*****************************************/

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