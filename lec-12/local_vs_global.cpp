#include <iostream>
using namespace std;

int B;

int* foo(){
	int A;
	A = 15;
	return &A;
	// incorrect because the function is returning the address
	// of a variable (A) that is removed from the stack afterwards
}

int bar(){
	B = 20;
	return B;

}
int* createAnInt(){
    int *p;
	p = new int;// make p point to an int on the heap
	*p = 15;
    return p;
}

int* createAnArrayOfInts(int len){
	int* p = new int[len];
	for(int i =0; i< len; i++)
		p[i] = 10;
   return p;
}

int main(){
	int*q = createAnInt();
	cout<<bar()<<endl;
	cout<<*q<<endl;

	q= createAnArrayOfInts(5);
	cout<<" Accessing an array on the heap"<<endl;
	for(int i =0; i< 5; i++)
		cout<<q[i]<<" ";

	cout<<endl;


}
