//testDrawShapes.cpp

#include <iostream>
#include <cstdlib>
#include "drawShapes.h"
#include "tdd.h"
using namespace std;

void testdrawTriangle(){

string exp1=
" * \n" 
"***\n";

string act1= drawTriangle(3);
assertEqual(exp1, act1, " width:3");

string exp2=
"  *  \n" 
" *** \n"
"*****\n";

string act2= drawTriangle(5);
assertEqual(exp2, act2, " width:5");


}


int main(int argc, char* argv[]){
	if(argc!=2){
		cerr<<"Usage: "<<argv[0]<<" width "<<endl;
		exit(0);
	}


	testdrawTriangle();
	//cout<<drawTriangle(3);

}