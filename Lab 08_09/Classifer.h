#pragma once

//****************************************************************************************************
/// <summary>
/// @file Classifier.h
/// @brief Classifer Header file Library
/// @details This file contains a Classifer class which has a pure virtual testing function. Other classes will inherts from this class.
/// @author Hangsihak Sin
/// @date 14/04/2023
/// **************************************************************************************************

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Data.h"

#define ARRAYSIZE 180

/// <summary>
/// @class Classifer Classifier.h "Classifer.h"
/// @brief An Abstract Class called Classifier since this class contains atleast one pure virtual function (a function that does not have a defintion)
/// @details This class contains function prototype for train and predict which will be later be used to inherited by other derived class
/// @author Hangsihak Sin
/// @date 14/04/2023
/// </summary>
class Classifier
{
public:

	/// <summary>
	/// @brief A pure virtual member for testing which does not have a body
	/// @details It will be used to declare the learnOrientation which will be used by derived class (concrete class that defines the function). Alsom we have =0 to signify as pure speciifer in pure virtual function
	/// @param takes a string data type
	/// @return void which means nothing
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	virtual void trainOrientation(std::string) = 0;

	/// <summary>
	/// @brief A pure virtual member for testing which does not have a body
	/// @details It will be used to declare the learnOrientation which will be used by derived class (concrete class that defines the function). Alsom we have =0 to signify as pure speciifer in pure virtual function
	/// @param takes 3 double data type
	/// @return void which means nothing
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	virtual void predictOrientation(double, double, double) = 0;

	/// <summary>
	/// @brief A pure virtual member for testing which does not have a body
	/// @details It will be used to declare the learnOrientation which will be used by derived class (concrete class that defines the function). Alsom we have =0 to signify as pure speciifer in pure virtual function
	/// @param takes a string data type
	/// @return void which means nothing
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	virtual void predictOrientation(std::string) = 0;
};