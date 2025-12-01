/*
* Prince Mondano
* Nov 30, 2025
* 
* Employee Storing Data
*/

#include <iostream>
#include <fstream>
#include <sstream>



int main(int argc, char* argv[])
{
	//## Testing
	std::cout << "argc: " << argc << std::endl;	
	
	std::cout << "argv[1]: " << argv[1] << std::endl;

	//## File Opening
	std::ifstream myFile(argv[1]); //Opening the csv file

	
	//## Variables of where data will be stored
	std::string holdSITF;
	std::string hold;

	
	//## Reading The File
	while (getline(myFile, hold)) //Gets all the line the the CSV file stores it in hold, 
		//and loops back and do the same thing again
	{
		std::stringstream ss(hold); //Its the same as this -> ss << hold;
		
		getline(ss, holdSITF, ','); //The 3rd parameter is the delimiter, which is a comma in this case

		//Outputting the data stored in holdSITF
		std::cout << "holdSITF: " << holdSITF << std::endl;
	}


	myFile.close();
}