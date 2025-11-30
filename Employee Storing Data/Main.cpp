/*
* Prince Mondano
* Nov 30, 2025
* 
* Employee Storing Data
*/

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[])
{

	std::cout << "argc: " << argc << std::endl;	
	
	std::cout << "argv[1]: " << argv[1] << std::endl;

	//variables
	std::ifstream myFile(argv[1]); //Opening the csv file
	std::string holdthis; 


	
	//Reading The File
	char test;
	std::string hold;

	while (myFile.get(test))
	{
		hold.append(1, test);
		std::cout << hold << std::endl;
		break;
	}

	
	


	myFile.close();
}