// Final Project - Lab 08/09
// Implmentation for DummyClassifier Class Library
// Hangsihak Sin 
// PROG71020 - 23W
// April 15, 2023

#include "Classifer.h"
#include "DummyClassifier.h"

// trainOrientation function that inherited from Classifier class and print its function name
void DummyClassifier::trainOrientation(std::string fileName)
{
	std::cout << "DummyClassifier called train() function that takes fileName." << std::endl;
}

// predictOrientation function that inherited from Classifier class and print its function name
void DummyClassifier::predictOrientation(double x, double y, double z)
{
	std::cout << "DummyClassifier called predict() function that takes user input." << std::endl;
}

// predictOrientation function that inherited from Classifier class and print its function name
void DummyClassifier::predictOrientation(std::string fileName)
{
	std::cout << "DummyClassifier called predict() function that takes fileName." << std::endl;
}