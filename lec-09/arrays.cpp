#include <iostream>
using namespace std;


void swapValue(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;

}

int main(){
	int a =30, b = 40;
	swapValue(&a, &b);
	cout<<"A= "<< a << " B = "<< b<<endl;
/*

	int* p;
	int y = 3;
	p = &y;
	cout<<"Address of p is :"<<&p<<endl;
	cout<<"Value of p is :"<<p<<endl;
	cout<<"Value of *p is :"<<*p<<endl;
	cout<<"Value of y is :"<<y<<endl;
	*p = 5;
	cout<<"After changing y to 5"<<endl;
	cout<<"Address of p is :"<<&p<<endl;
	cout<<"Value of p is :"<<p<<endl;
	cout<<"Value of *p is :"<<*p<<endl;
	cout<<"Value of y is :"<<y<<endl;

*/


}