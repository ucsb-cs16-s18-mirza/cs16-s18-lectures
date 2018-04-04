// fizzbuzz_1.cpp
// Diba Mirza
#include <iostream>
#include <cstdlib>
using namespace std;

//int x;  //Global x
int main(int argc, char* argv[])
{
	int x; //Declaration for x, x is a local variable
	       // x is not visible outside of main
	       //uninitialized variables have junk value
	if(argc !=2){
		cerr << "Usage "<< argv[0] << " number "<<endl;
		exit(1);
	}
	//argv[1] is the second parameter passed to the program
	x = atoi(argv[1]); //converts a string of numeric characters to a number
	// cout <<" Number of arguments "<<argc <<endl;

	if ( x % 3 == 0) {// x is divisible by 3
		cout << "Fizz";
		if(x % 5 == 0) {
		cout<< "Buzz";
    	}
    	cout <<endl;

	}else if(x % 5 == 0) {
		cout<< "Buzz" <<endl;

    }else {
		cout<< x <<endl;
    }

	
	return 0;
}