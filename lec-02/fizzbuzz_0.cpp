// fizzbuzz_0.cpp
// Diba Mirza
#include <iostream>
using namespace std;

//int x;  //Global x
int main()
{
	int x; //Declaration for x, x is a local variable
	       //x is not visible outside of main
	       //uninitialized variables have junk value

	cout<<"Enter a number : ";
	cin >> x;

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
