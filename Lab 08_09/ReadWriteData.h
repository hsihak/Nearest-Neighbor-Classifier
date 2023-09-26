#pragma once

/// <summary>
/// @class ReadWriteData ReadWriteData.h "ReadWriteData.h"
/// @brief A Class called ReadWriteData for ReadWriteData
/// @author Hangsihak Sin
/// @date 14/04/2023
/// </summary>

#include "NNClassifier.h"

/// <summary>
/// @fn void setDimensions(std::ifstream&, NNClassifier&, Data&, int*, bool);
/// @brief A setDimensions that will read data from text file and assign dimensions (attributes) to the NNClassifier
/// @details data will be written to either testingPoint and dataPoint depending which determine by the bool value
/// @param ifstream by reference, NNClassifier object by reference, Data object by reference, integer data tye passed by reference, and bool value 
/// @return void (nothing)
/// @author Hangsihak Sin
/// @date 14/04/2023
/// </summary>
//void setDimensions(std::ifstream&, NNClassifier&, Data&, int*, bool);

/// <summary>
/// @fn std::ofstream& operator<<(std::ofstream& fout, Data& phoneOrientation);
/// @brief an operator overloading function that prints out the phoneOrientation attributes
/// @param ofstream by reference and Data by reference
/// @return ostream by reference
/// @author Hangsihak Sin
/// @date 14/04/2023
//std::ofstream& operator<<(std::ofstream&, Data&);