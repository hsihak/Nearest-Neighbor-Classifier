#pragma once

//****************************************************************************************************
/// <summary>
/// @file KNNClassifier.h
/// @brief KNNClassifier Header file Library
/// @details This file contains a KNNClassifier class which will inherited functions from Classifier Class (Abstract Class)
/// @author Hangsihak Sin
/// @date 14/04/2023
/// **************************************************************************************************

#include <iostream>
#include <string>
#include "Classifer.h"
#include "Data.h"

#define RESULT_FILE "result.txt"

	/// <summary>
	/// @class NNClassifier NNClassifier.h "NNClassifier.h"
	/// @brief A Class called NNClassifier that will inherits from Classifier Class
	/// @details Contains functions from Classifier Class and override specifier is used to ensure it gets to the proper function
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
class NNClassifier: public Classifier
{
	/// @brief an array of Data used for storing data from training 
	Data dataPoints[ARRAYSIZE];

	/// @brief an array of Data used for checking phone orientation either manually or provided text file
	Data testingPoints[ARRAYSIZE];

public:

	/// <summary>
	/// @fn void train(std::string) override
	/// @brief A train function that used to train the program for determining the phone orientation
	/// @details based on data provided it will train the program as part of machine-learning
	/// @param string data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void trainOrientation(std::string) override;

	/// <summary>
	/// @fn void testing(std::string)
	/// @brief A testing function that used to verify if implementation works as expected
	/// @details takes a textfile and determines the data provided and output the phone orientation 
	/// @param  string data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void testingOrientation(std::string);

	/// <summary>
	/// @fn void predict(double, double, double) override
	/// @brief A predict function the label of phone orientation based on the provided user input
	/// @details takes input from the user and determine the phone orientation based on train data it learned
	/// @param  3 double data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void predictOrientation(double, double, double) override;

	/// <summary>
	/// @fn void predict(std::string) override
	/// @brief A predict function the label of phone orientation based on the provided text file
	/// @details based on the train data it learned will determine the label and write complete result to a new result text file
	/// @param  string data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void predictOrientation(std::string) override;

	/// <summary>
	/// @fn Data& nearestNeighbour(Data)
	/// @brief A neartestNeighbour function that finds the nearestNeighbour between points
	/// @details It determines the nearest neighbour based on data point of current and existing data
	/// @param Data object
	/// @return the reference of Data object
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	Data& nearestNeighbour(Data);

	/// <summary>
	/// @fn friend void setDimensions(std::ifstream&, NNClassifier& , Data&, int*, bool);
	/// @brief A setDimensions that will read data from text file and assign dimensions (attributes) to the NNClassifier
	/// @details data will be written to either testingPoint and dataPoint depending which determine by the bool value. It is a friend so that we can access dataPoint and testingPoint outside the class
	/// @param ifstream by reference, NNClassifier object by reference, Data object by reference, integer data tye passed by reference, and bool value 
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	friend void setDimensions(std::ifstream&, NNClassifier& , Data&, int*, int);

};