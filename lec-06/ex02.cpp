//ex01.cpp
//Writing to files
#include <iostream>
#include <fstream>


using namespace std;

int main(){
	ifstream ifs;
	// Open a file for writing
	ifs.open("animals.txt");
	//open will fail if file does not exist
	// but your program will not crash
	if(!ifs){
		cerr<<" Open failed "<<endl;
		return 0;
	}
	string line;
	getline(ifs, line);
	while(ifs){	
		cout<<line<<endl;//Process the current line
		getline(ifs,line); // Read the next line
	}

	// Close the file
	ifs.close();
	return 0;
}