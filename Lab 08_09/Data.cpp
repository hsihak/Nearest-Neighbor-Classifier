// Final Project - Lab 08/09
// Implmentation for Data Class Library
// Hangsihak Sin 
// PROG71020 - 23W
// April 15, 2023

#include "Data.h"
#include <iostream>
#include <string>

// Default Constructor for Data class 
Data::Data()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->o = 0;
}

// Copy Constructor for Data class
Data::Data(Data& point)
{
	this->x = point.x;
	this->y = point.y;
	this->z = point.z;
	this->o = point.o;
}

// Parameterised Constructor for Data class
Data::Data(double x, double y, double z, int o)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->o = o;
}


// Getter function for X member attribute
double Data::getX(void) {
	return x;
}

// Getter function for Y member attribute
double Data::getY(void) {
	return y;
}

// Getter function for Z member attribute
double Data::getZ(void) {
	return z;
}

// Getter function for O member attribute
int Data::getO(void) {
	return o;
}

// Setter function for X member attribute
void Data::setX(double x) {
	this->x = x;
}

// Setter function for Y member attribute
void Data::setY(double y) {
	this->y = y;
}

// Setter function for Z member attribute
void Data::setZ(double z) {
	this->z = z;
}

// Setter function for O member attribute
void Data::setO(int o) {
	this->o = o;
}

// Getter function for getOrientation 
std::string Data::getOrientation(void)
{
	switch (this->o)
	{
		case 1:
			return "Face Up";

		case 2:
			return "Face Down";

		case 3:
			return "Portrait";

		case 4:
			return "Portrait Upside Down";

		case 5:
			return "Landscape Left";

		case 6:
			return "Landscape Right";

		default:
			return "Unknown Orientation";
		
	}
}

// Getter function for getDistanceFrom
double Data::getDistanceFrom(Data point)
{
	double distance = sqrt(pow((point.getX() - this->x), 2) + pow((point.getY() - this->y), 2) + pow((point.getZ() - this->z), 2));

	return distance;
}

// Assignment Operator for = object
Data Data::operator = (Data point)
{
	if (this != &point)
	{
		this->x = point.x;
		this->y = point.y;
		this->z = point.z;
		this->o = point.o;
	}

	return *this;
}