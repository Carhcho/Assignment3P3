# Assignment3P3
Assignment3 Programming 3
----------------------------------------------------------

Design and implement a set of classes that define a series of three-dimensional geometric shapes. This design must use inheritance, one base class, and at least two derived classes. For the shapes store fundamental data about its size and provide methods to access and modify the data. There should be data in the base class and in the derived classes. The data should be template data types so that instances of the classes can be created with data types of int, double, and float. The design should include methods to calculate the circumference, area, and volume of the shapes.
<br>

An exception class should be created to indicate that one of the data members of the shape is negative. The exception should provide an appropriate message about what is wrong and which data member is wrong and its value. The exception should be thrown when doing the calculations. Main should throw the exception and handle the exception, which then allows the user to enter a new value for the data so it can be corrected and the calculations are performed.
<br>

The driver class should create an instance of each of the derived classes. The driver should show that all of the methods work correctly and the exceptions are handled correctly. The shapes should use different data types to create the instance (int, double, or float).

<br>
Author: Cesar Roncancio
<br>
Created: 11/14/2021
<br>
Revisions: 11/14/2021 I created the classes Cylinder and Sphere derived from CircularShape, the first two classes inherit from the last class. I also created the ShapeException class inheriting all properties from the exception class and created the method error that will show the custom error message.
