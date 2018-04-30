//tdd.cpp
#include <iostream>
#include <cstdlib>

using namespace std;

void assertEqual(string expected, string actual, string message=""){
	if(expected==actual){
		cout<<"PASSED: "<< message <<endl;
	}else{
		cout<<"  FAILED: "<< message <<endl<<"Expected: "<<"[\n"
		<<expected<<"\n]"<< "Actual: [\n"<<actual<<"\n]"<<endl;
	}
  
}
