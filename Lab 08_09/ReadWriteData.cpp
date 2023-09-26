// Final Project - Lab 08/09
// Implmentation for ReadWriteData Class Library
// Hangsihak Sin 
// PROG71020 - 23W
// April 15, 2023

#include "NNClassifier.h"
#include "Data.h"

// A setDimensions Function that handle read and write file
void setDimensions(std::ifstream& fin, NNClassifier& nnClassifier, Data& phoneOrientation, int* index, int type)
{
	std::string line;
	std::getline(fin, line);
	std::istringstream issline(line);

	std::string dimensions;
	std::getline(issline, dimensions);
	std::istringstream issdimension(dimensions);

	std::string x;
	std::string y;
	std::string z;
	std::string orientation;

	double xCoordinate = 0;
	double yCoordinate = 0;
	double zCoordinate = 0;
	int oOrientation = 0;

	while (!issdimension.eof())
	{
		std::getline(issdimension, x, ',');
		xCoordinate = stod(x);

		std::getline(issdimension, y, ',');
		yCoordinate = stod(y);

		std::getline(issdimension, z, ',');
		zCoordinate = stod(z);

		if (type == 1 || type == 2)
		{
			std::getline(issdimension, orientation);
			oOrientation = stoi(orientation);
		}
	}

	if ((xCoordinate >= -1 && xCoordinate <= 1) && (yCoordinate >= -1 && yCoordinate <= 1) && (zCoordinate >= -1 && zCoordinate <= 1) || (oOrientation >= 1 && oOrientation <= 6))
	{
		// type 1 is for trainOrientation
		if (type == 1)
		{
			Data newPoint(xCoordinate, yCoordinate, zCoordinate, oOrientation);
			nnClassifier.dataPoints[*index] = newPoint;
		}
		// type 2 is for testingOrientation
		else if (type == 2)
		{
			Data newPoint(xCoordinate, yCoordinate, zCoordinate, oOrientation);
			nnClassifier.testingPoints[*index] = newPoint;
		}
		// type 3 is for predictOrientation
		else if (type == 3)
		{
			Data newPoint(xCoordinate, yCoordinate, zCoordinate, oOrientation);
			nnClassifier.testingPoints[*index] = newPoint;
		}
	}


}

// Operator Overloading Function 
std::ofstream& operator<<(std::ofstream& fout, Data& phoneOrientation)
{
	fout << phoneOrientation.getX() << ",";
	fout << phoneOrientation.getY() << ",";
	fout << phoneOrientation.getZ() << ",";
	return fout;
}