#include <iostream>
using namespace std;

struct Point{
	double x;
	double y;
};

struct Box{
	Point ul;
	double width;
	double height;

};

void printBox(Box b){
	cout<< "("<< b.ul.x << " , "<<b.ul.y <<")"<<endl;
	cout<<" Width: "<<b.width<<endl;
	cout<<" Height: "<<b.height<<endl;
}

void initBox(Box& b, Point p, double w, double h){
	// b is a reference, changing b will change the parameter passed to the funtion
	b.ul = p;
	b.width =  w;
	b.height = h;
	cout <<" In initBox"<<endl;
	printBox(b);
}

int main(){

	//Box b1 = {{500, 600}, 10, 20};
	Box b1;
	b1.ul = {500, 600}; // This only works if you compile with the -std=c++11 option
	Point p = {500, 600};
	cout <<"Created a box"<<endl;
	initBox(b1, p, 10, 20);
	printBox(b1);

	return 0;
}