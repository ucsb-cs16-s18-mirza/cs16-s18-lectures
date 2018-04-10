//sumSeries.cpp

#include <iostream>
using namespace std;

// 1+ 1/2 + 1/3 + ....1/n
int main(){
	int n;
	char ans = 'y';
	/*do{
		cout<<"Enter the value of n :";
		cin>>n;

		double result=0;
		for(int i =1 ; i<=n; i++){
			result = result + 1/static_cast<double>(i);
		}
		cout <<"Sum of a "<< n << " term series is "<<result<<endl;
		cout<<"Do you want to continue: ";
		cin>>ans;
	}while(ans=='y');*/

	while(1){
		cout<<"Enter the value of n :";
		cin>>n;

		double result=0;
		for(int i =1 ; i<=n; i++){
			result = result + 1/static_cast<double>(i);
		}
		cout <<"Sum of a "<< n << " term series is "<<result<<endl;
		cout<<"Do you want to continue: ";
		cin>>ans;
		if(ans != 'y')
			break;
	}



}