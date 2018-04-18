//ex01.cpp
//Writing to files
#include <iostream>
#include <fstream>


using namespace std;

int main(){
	ofstream ofs;
	// Open a file for writing
	ofs.open("animals.txt");

	// Write to it
	ofs<<"Duck\nCow\nGoat\nParrot\n";
	// Close the file
	ofs.close();
	return 0;
}