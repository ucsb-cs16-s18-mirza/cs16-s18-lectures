//drawShapes.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

string drawSquare(int width){

	string result="";

	for(int i =0; i<width;i++){
		for(int j =0; j<width;j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}


string drawRightTriangle(int width){

	string result="";

	for(int i =0; i<width;i++){
		for(int j =0; j<=i;j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}


/*
width = 5, rows = 3, numSpaces =2


  * 
 ***
*****

width = 7, rows = 4 , numSpaces = 3
In general rows = (width+1)/2

   * 
  ***
 *****
*******
*/

string drawTriangle (int width){


	int rows = (width+1)/2;
	string result ="";
	int numSpaces = rows - 1;
	int numStars = 1;
	for(int i =0; i< rows; i++){
		string line="";
		string spaces ="";
		string stars = "";
		//cout<<" First iteration"<<endl;
		for(int j =0; j<numSpaces;j++){
			spaces = spaces + " ";
		}
		//cout<<"Spaces "<<spaces<<endl;
		for(int j =0; j<numStars;j++){
			stars = stars + "*";
		}
		//cout<<"Stars = " <<stars<<endl;
		line = spaces + stars + spaces + "\n";

		result = result + line;
		numSpaces = numSpaces -1; // numSpaces--
		numStars = numStars + 2;

	}

	return result;	
}