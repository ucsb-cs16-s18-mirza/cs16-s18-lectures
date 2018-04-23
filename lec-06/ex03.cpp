//ex01.cpp
//Writing to files
#include <iostream>
#include <fstream>


using namespace std;

int main(){
	ifstream ifs;
	// Open a file for writing
	ifs.open("deadparrot.txt");
	//open will fail if file does not exist
	// but your program will not crash
	if(!ifs){
		cerr<<" Open failed "<<endl;
		return 0;
	}


	int numparrots= 0;
	char response = '\n';
	while(response=='\n'){
		getline(ifs, line);//read the next line 
		//and strip the line of the new line character
		if(!ifs)
			break;
		cout<<line<<endl;//process the line
		int pos = line.find("parrot");
		if(pos >=0){// Found the word "parrot" in the line
			numparrots++;
		}
		response= cin.get();
	}
	cout<<"Lines that included 'parrot' :"<<numparrots<<endl;

	/*
	getline(ifs, line);
	cout<<line<<endl;*/

	// Close the file
	ifs.close();
	return 0;
}