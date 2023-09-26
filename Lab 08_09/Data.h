#pragma once

//****************************************************************************************************
/// <summary>
/// @file Data.h
/// @brief Data Header file Library
/// @details This file contains a Data class which member attributes for data and other functions such as getters and setters
/// @author Hangsihak Sin
/// @date 14/04/2023
/// **************************************************************************************************

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>

/// <summary>
/// @class Data Data.h "Data.h"
/// @brief A Class called Data that is used to hold all the data for the program
/// @details In Data Class, all the member variables has a private specificer, whereas the methods has a public specificer
/// @author Hangsihak Sin
/// @date 14/04/2023
/// </summary>
class Data {
private:
	/// @brief A member variable that will be used to store X vector of phone orientation which is in double data type
	double x;

	/// @brief A member variable that will be used to store Y vector of phone orientation which is in double data type
	double y;

	/// @brief A member variable that will be used to store Z vector of phone orientation which is in double data type 
	double z;

	/// @brief A member variable that will be used to store Orientation of phone which is in integer data type
	int o;

public:

	/// <summary>
	/// @brief A default Constructor of Data Class
	/// @details initializes empty object of Data Class
	/// @param takes no parameter
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	Data();

	/// <summary>
	/// @brief A copy constructor of Data Class
	/// @details used to perform deep copies from another Data object 
	/// @param takes another Data object
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	Data(Data&);

	/// <summary>
	/// @brief A parameterised constructor of Data Class
	/// @details used to initializes data object based on provided parameters
	/// @param takes 3 double and 1 integer data type
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	Data(double, double, double, int);

	/// <summary>
	/// @fn getX(void)
	/// @brief A getter function for X member attribute
	/// @details gets X member of the current object in use
	/// @param takes no parameter (void)
	/// @return double data type of X member attribute
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	double getX(void);

	/// <summary>
	/// @fn double getY(void)
	/// @brief A getter function for Y member attribute
	/// @details gets Y member of the current object in use
	/// @param takes no parameter (void)
	/// @return double data type of Y member attribute
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	double getY(void);

	/// <summary>
	/// @fn double getZ(void)
	/// @brief A getter function for Z member attribute
	/// @details gets Z member of the current object in use
	/// @param takes no parameter (void)
	/// @return double data type of Z member attribute
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	double getZ(void);

	/// <summary>
	/// @fn getO(void)
	/// @brief A getter function for O member attribute
	/// @details gets O member of the current object in use
	/// @param takes no parameter (void)
	/// @return double data type of O member attribute
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	int getO(void);

	/// <summary>
	/// @fn void setX(double)
	/// @brief A setter function for X member attribute
	/// @details sets O member of the current object in use
	/// @param takes a double data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void setX(double);

	/// <summary>
	/// @fn void setY(double)
	/// @brief A setter function for Y member attribute
	/// @details sets Y member of the current object in use
	/// @param takes a double data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void setY(double);

	/// <summary>
	/// @fn setZ(double)
	/// @brief A setter function for Z member attribute
	/// @details sets Z member of the current object in use
	/// @param takes a double data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void setZ(double);

	/// <summary>
	/// @fn void setO(double)
	/// @brief A setter function for O member attribute
	/// @details sets O member of the current object in use
	/// @param takes a double data type
	/// @return void (nothing)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	void setO(int);

	/// <summary>
	/// @fn double getDistanceFrom(Data)
	/// @brief A function that calculate the distance between Data object
	/// @details returns the distance between current Data object and another Data object
	/// @param takes Data object
	/// @return double data type of the calculated distance
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	double getDistanceFrom(Data);

	/// <summary>
	/// @fn std::string getOrientation(void)
	/// @brief A function that get the orientation from Data object
	/// @details get the label of the orientation
	/// @param takes no parameter (nothing)
	/// @return string data type (the label of the orientation)
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	std::string getOrientation(void);


	/// <summary>
	/// @fn Data operator = (Data)
	/// @brief An assignment operator of Data class
	/// @details allows assignment operator to work in Data class
	/// @param takes Data object
	/// @return Data object 
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	Data operator = (Data);

	/// <summary>
	/// @fn friend std::ofstream& operator<<(std::ofstream&, Data&);
	/// @brief An operator overloading function which will be used to print the phoneOrientations attributes
	/// @param ofstream by reference and Data by reference
	/// @return ostream by reference
	/// @author Hangsihak Sin
	/// @date 14/04/2023
	/// </summary>
	friend std::ofstream& operator<<(std::ofstream&, Data&);
};