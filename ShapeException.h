#pragma once
#include <string>
#include <iostream>
using namespace std;

class ShapeException : public exception
{
public:
	string error();
};

