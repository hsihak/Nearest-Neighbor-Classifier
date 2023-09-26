#pragma once

//****************************************************************************************************
/// <summary>
/// @file KNNClassifier.h
/// @brief KNNClassifier Header file Library
/// @details This file contains a KNNClassifier class which will inherited functions from Classifier Class (Abstract Class)
/// @author Hangsihak Sin
/// @date 14/04/2023
/// **************************************************************************************************

#include "Classifer.h"
#include <iostream>

	/// <summary>
	/// @class KNNClassifier KNNClassifier.h "KNNClassifier.h"
	/// @brief A Class called KNNClassifier that will inherits from Classifier Class
	/// @details Contains functions from Classifier Class and override specifier is used to ensure it gets to the proper function
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
class KNNClassifier: public Classifier
{
	public:

	/// <summary>
	/// @fn void train(std::string) override
	/// @brief A train function that will be used as a dummy function to simply print its function name
	/// @details override specifier is used to ensure it gets to the proper function
	/// @param string data type 
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void trainOrientation(std::string) override;

	/// <summary>
	/// @fn void predict(double, double, double) override
	/// @brief A predict function that will be used as a dummy function to simply print its function name
	/// @details override specifier is used to ensure it gets to the proper function
	/// @param string data type 
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void predictOrientation(double, double, double) override;

	/// <summary>
	/// @fn void predict(std::string) override
	/// @brief A train function that will be used as a dummy function to simply print its function name
	/// @details override specifier is used to ensure it gets to the proper function
	/// @param string data type 
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void predictOrientation(std::string) override;
};