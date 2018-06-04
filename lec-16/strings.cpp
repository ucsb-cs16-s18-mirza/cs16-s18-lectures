//Fun with recursion
#include <iostream>
#include <cctype>
using namespace std;

void strings(string s1, string s2){

	for (int i = 0; i <= s1.length(); i++)
		s2[i] = s1[i];
	
	if (s1 == s2) {
		s1="Art";
	}

	cout<<s1<<" "<<s2<<endl;
}

void cstrings(char s1[], char s2[]){

	for(int i = 0; i <= 4; i++)
		s2[i]=s1[i];

	if (s1 == s2) {
		cout<< "Art"<<endl;
		// s1 = "Art"; 
		// Cannot change the address of an array
	}

	cout<<s1<<" "<<s2<<endl;
}

int main(){


	return 0;

}


