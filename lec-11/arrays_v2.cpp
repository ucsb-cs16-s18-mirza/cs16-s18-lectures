#include <iostream>
using namespace std;


double averageScore(double sc[], int length); //Declaration

double averageScore(double sc[], int length){

	double arr[5];
	double sum = 0;
	for(int i = 0; i< length; i++){
		sum +=  sc[i];
	}
    //sc poses an array, but its really something else (next lecture)
   /* cout<<"Size of scores in function : "<<sizeof(sc)<<endl;
	cout<<"Size of a double in function: "<<sizeof(double)<<endl;
*/
	return (sum/length);

}

int main(){

	double scores[5]={100, 90, 99, 50, 40};

	double result;
	result = averageScore(scores, 5);

	cout<<"Average calculated by function: "<<result<<endl;


}
