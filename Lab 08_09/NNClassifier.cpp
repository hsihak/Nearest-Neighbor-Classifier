// Final Project - Lab 08/09
// Implmentation for DNNClassifier Class Library
// Hangsihak Sin 
// PROG71020 - 23W
// April 15, 2023

#include <iostream>
#include "Data.h"
#include "NNClassifier.h"
#include "ReadWriteData.h"

// trainOrientation function that takes fileName to train alogrithm
void NNClassifier::trainOrientation(std::string fileName)
{
	std::ifstream fin;
	fin.open(fileName);
	int i = 0;

	Data point;

	// If the file is openable then it will read til the end of file
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			setDimensions(fin, *this, point, &i, 1);
			i++;
		}
		fin.close();
	}
}

// testingOrientation function that testData from text file
void NNClassifier::testingOrientation(std::string fileName)
{
	std::ifstream fin;
	fin.open(fileName);
	int i = 0;
	std::ofstream fout;

	Data point;

	// Check if the file provided is openable, then it will read til the end of file
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			setDimensions(fin, *this, point, &i, 2);
			i++;
		}
		fin.close();
	}

	for (int j = 0; j < i; j++)
	{

		Data nearestNeighbour = this->nearestNeighbour(testingPoints[j]);
		
		std::cout << testingPoints[j].getX() << "," << testingPoints[j].getY() << "," << testingPoints[j].getZ() << "," << testingPoints[j].getO() << "," << nearestNeighbour.getOrientation() << std::endl;
	
	}
}

// predictOrientation function that predict the orientation based on the text file
void NNClassifier::predictOrientation(std::string fileName)
{
	std::ifstream fin;
	fin.open(fileName);
	int i = 0;

	Data point;

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			setDimensions(fin, *this, point, &i, 3);
			i++;

		}
		fin.close();

	}

	std::string outputFileName = RESULT_FILE;

	std::ofstream fout;

	fout.open(outputFileName);
	if (fout.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			Data nearestNeighbour = this->nearestNeighbour(testingPoints[j]);

			testingPoints[j].setO(nearestNeighbour.getO());

			fout << testingPoints[j] << testingPoints[j].getO() << "," << nearestNeighbour.getOrientation() << std::endl;
		}

		std::cout << fileName << " data has been determined and added to " << outputFileName << std::endl;

		std::cout << std::endl << outputFileName << " file has been successfully saved" << std::endl << std::endl;

		fout.close();
	}
	else
	{
		std::cout << "Error opening " << outputFileName << " file " << std::endl << std::endl;
	}


}

// predictOrientation function that can detect vector provided manually 
void NNClassifier::predictOrientation(double x, double y, double z)
{
	if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1) && (z >= -1 && z <= 1))
	{
		Data point(x, y, z, 0);

		Data nearestNeighbour;

		nearestNeighbour = this->nearestNeighbour(point);

		point.setO(nearestNeighbour.getO());

		std::cout << "Predicted Label: " << point.getO() << "\nThe orientation of the phone : " << point.getOrientation() << std::endl;
	}
	else
	{
		std::cout << "\nData is out of range, please ensure your value is not less than -1 or greater than 1 /o\\" << std::endl << std::endl;

		return;
	}

}

// nearestNeighbour function that check the nearest neighbour with the train data
Data& NNClassifier::nearestNeighbour(Data point)
{
	Data nearestNeighbour = dataPoints[0];

	for (int i = 1; i < ARRAYSIZE; i++)
	{
		if (point.getDistanceFrom(dataPoints[i]) < point.getDistanceFrom(nearestNeighbour))
		{
			nearestNeighbour = dataPoints[i];
		}
	}

	return nearestNeighbour;
}

