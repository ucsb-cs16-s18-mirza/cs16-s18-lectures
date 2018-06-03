//Fun with recursion
#include <iostream>
using namespace std;





int countVowels(char* s, int len){
	return 42;
}

int countVowelsStr(string s){
	return 42;
}

bool isPalindrome(string s){
	int len = s.length();
	if(s.length()==0 || s.length()==1)
		return true;
	if(s[0] != s[len-1])
		return false;
	return isPalindrome(s.substr(1, len-2));


}




void funWithStrings(){
	char str1[] = {'a','p','e','\0'};
	char str2[] = "trouble";
	string str3 = "moretrouble";
/*		
	cout<<"Count vowels :"<<endl;
	cout<<" ape: "<<countVowels(str1, sizeof(str1)-1)<<endl;
	cout<<" trouble: "<<countVowels(str2, sizeof(str2)-1)<<endl;
	cout<<" moretrouble: "<<countVowelsStr(str3)<<endl<<endl;
*/
	string s1 = "detartrated", s2 = "apa", s3 = "ape";

	cout<<"Is Palindrome?"<<endl;

	cout<<s1<<(isPalindrome(s1)? " Yes":" No")<<endl;
	cout<<s2<<(isPalindrome(s2)? " Yes":" No")<<endl;
	cout<<s3<<(isPalindrome(s3)? " Yes":" No")<<endl;

}


void printArray(int a[], int len){
	if(len ==0)
		return;

	cout<<a[0]<<" ";
	printArray(a+1, len -1);
	return;
}

int countOddIterative(int a[], int len){
	int count =0;

	for(int i=0; i<len;i++){
		if(a[i]%2 ==1){
			count++;
		}
	}
	return count;

}

int countOddRecursive(int a[], int len){
	if(len ==0) //Step1: Base case 
		return 0;

	int numOddRest = countOddRecursive(a+1, len-1);
	if(a[0]%2 ==1){
		// current element is odd
		return 1+numOddRest ;
	}else{
		//current element is even
		return numOddRest;
	}

}

void funWitharrays(){
	int arr[]={5,3,2,1,345,46,66,6,5, 13, 10};
	int len = sizeof(arr)/sizeof(int);
	
	printArray(arr,len);
	cout<<endl;
	cout<<"# Odd (R) "<<countOddRecursive(arr,len)<<endl;
	//cout<<"# Odd (I) "<<countOddIterative(arr,len)<<endl;
	
}


int main(){
	//funWitharrays();
	funWithStrings();
	return 0;

}


