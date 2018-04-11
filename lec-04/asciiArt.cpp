//asciiArt.cpp

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
width = 3, num rows = 2

 * 
***


width = 5, rows = 3


  * 
 ***
*****

width = 7, rows = 4 
In general rows = (width+1)/2

   * 
  ***
 *****
*******
*/

string drawTriangle (int width){


}







int main(int argc, char* argv[]){
	if(argc!=2){
		cerr<<"Usage: "<<argv[0]<<" width "<<endl;
		exit(0);
	}

	int width = atoi(argv[1]);
	string sq = drawSquare(width);
	cout<<sq<<endl;
	sq = drawRightTriangle(width);
	cout<<sq<<endl;
	

}