#include <iostream>
using namespace std;


double averageScore(double sc[], int length); //Declaration

double averageScore(double* sc, int length){

	double arr[5];
	double sum = 0;
	for(int i = 0; i<length; i++){
		sum +=  sc[i];
	}

	return (sum/length);

}

int main(){

    UndergradStudents ug[3];
    ug[0] = {"Joe", "Shmoe", "EE", {3.8, 3.3, 3.4, 3.9} };
    ug[1] = {"Macy", "Chen", "CS", {3.9, 3.9, 4.0, 4.0} };
    ug[2] = {"Peter", "Patrick", "ME", {3.8, 3.0, 2.4, 1.9} };
	
	


}
