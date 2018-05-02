#include <iostream>
using namespace std;


double averageScore(double sc[], int length);

int main(){

	double scores[5]={100, 90, 99, 50, 40};

	for(int i = 0; i< 5; i++){
		cout<<scores[i]<<endl;
	}

	cout <<"Printing using the c++ 11 range based for loop"<<endl;
	for(double item : scores){
		cout<<item<<endl;
	}
	
	double sum = 0;
	for(int i = 0; i< 5; i++){
		sum +=  scores[i];
	}
	cout<<"Size of scores : "<<sizeof(scores)<<endl;
	cout<<"Size of a double: "<<sizeof(double)<<endl;

	cout<< "Average midterm score is : "<< sum/(sizeof(scores)/sizeof(double))<<endl;




}