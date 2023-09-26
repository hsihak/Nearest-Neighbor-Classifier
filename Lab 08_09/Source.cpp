// -------------------------------
// Final Project - Lab 08/09
// Hangsihak Sin
// PROG71020 - W23
// April 14/2023
// -------------------------------

#include <iostream>
#include <stdlib.h>
#include "Classifer.h"
#include "NNClassifier.h"
#include "DummyClassifier.h"
#include "KNNClassifier.h"

int main(void)
{
	// Initialize NNClassifier object
	NNClassifier nnClassifier;

	// Initialize DummyClassifier object
	DummyClassifier dummyClassifier;

	// Initialize KNNClassifier object
	KNNClassifier knnClassifier;

	// Call trainOrientation function
	nnClassifier.trainOrientation("trainingData.txt");

	/* Testing Data for Implementation */

	/*std::cout << "Testing Data" << std::endl;*/

	// Call testingOrientation function
	//nnClassifier.testingOrientation("testingData.txt");

	// Design a menu

	int option = 0;

	do
	{
		std::cout << "\n*************************************************************" << std::endl;
		std::cout << "Welcome to Phone-Orientation Detector using Machine-Learning" << std::endl;
		std::cout << "                         Main-Menu                          " << std::endl;
		std::cout << "*************************************************************" << std::endl << std::endl;
		std::cout << "1. DummyClassifier" << std::endl;
		std::cout << "2. KNNClassifier" << std::endl;
		std::cout << "3. NNClassifier" << std::endl;
		std::cout << "4. Exit" << std::endl << std::endl;
		std::cout << "Please select one of the options above: ";

		std::cin >> option;

		std::cout << std::endl;

		// Main Menu and Sub-Menu are within
		switch (option)
		{
		case 1:
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			dummyClassifier.predictOrientation("unknownData.txt");
			std::cout << "DummyClassifier has not been implemented yet /o\\" << std::endl;
			std::cout << "-------------------------------------------------------------" << std::endl;
			break;
		}

		case 2:
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			knnClassifier.predictOrientation("unknownData.txt");
			std::cout << "KNNClassifier has not been implemented yet /o\\" << std::endl;
			std::cout << "-------------------------------------------------------------" << std::endl;
			break;
		}

		case 3:
		{
			system("pause");
			system("cls");
			int subOption = 0;

			do
			{
				std::cout << "*************************************************************" << std::endl;
				std::cout << "                   Welcome to NNClassifier                    " << std::endl;
				std::cout << "                           Sub-Menu                          " << std::endl;
				std::cout << "*************************************************************" << std::endl << std::endl;
				std::cout << "1. Manually check for phone orientation" << std::endl;
				std::cout << "2. Automatically check data file for phone orientation" << std::endl;
				std::cout << "3. Return to Main Menu" << std::endl;
				std::cout << "4. Exit the program" << std::endl;

				std::cout << "Please select one of the options above: ";

				
				std::cin >> subOption;

				switch (subOption)
				{
					case 1:
					{
						std::string x;
						std::string y;
						std::string z;

						std::cout << "Enter x value: ";
						std::cin >> x;

						std::cout << "Enter y value: ";
						std::cin >> y;

						std::cout << "Enter z value: ";
						std::cin >> z;

						// Manually Check for Phone Orientation
						std::cout << "-------------------------------------------------------------" << std::endl;
						nnClassifier.predictOrientation(stod(x), stod(y), stod(z));
						std::cout << "-------------------------------------------------------------" << std::endl;

						break;
					}

					case 2:
					{
						std::string fileName;
						std::cout << "\nEnter the file name (e.g., unknownData.txt): ";
						std::cin >> fileName;

						// Automatically Check data file for Phone Orientation
						std::cout << "-------------------------------------------------------------" << std::endl;
						nnClassifier.predictOrientation(fileName);
						std::cout << "-------------------------------------------------------------" << std::endl;
						break;
					}

					case 4:
					{
						std::cout << "\n********** Good Bye \\o/ ********** " << std::endl;
						exit(EXIT_SUCCESS);
						break;
					}
					
					default:
						break;
				}
			} while (subOption != 3);

			break;
		}

		case 4:
		{
			std::cout << "\n********** Good Bye \\o/ ********** " << std::endl;
			break;
		}


		default:
			std::cout << "Please choose one of the option above: " << std::endl;
		}

	} while (option != 4);

	return 0;
}