//Fun with recursion
#include <iostream>
using namespace std;


int countVowels(char* s, int len){
	return 42;
}

int countVowelsStr(string s){
	return 42;
}

bool isPalindrome(string s){ // s="aa"
	if(s.length()==1 || s.length()==0)
		return true;

	if(s[0]!=s[s.length()-1])
		return false;
	return isPalindrome(s.substr(1,s.length()-2));  // ""


}


void funWithStrings(){
	char str1[] = {'a','p','e','\0'};
	char str2[] = "trouble";
	string str3 = "moretrouble";
	string s1 = "detartrated", s2 = "apa", s3 = "ape";

	cout<<"Is Palindrome?"<<endl;
	cout<<isPalindrome("aa")<<endl;

	/*cout<<s1<<(isPalindrome(s1)? " Yes":" No")<<endl;
	cout<<s2<<(isPalindrome(s2)? " Yes":" No")<<endl;
	cout<<s3<<(isPalindrome(s3)? " Yes":" No")<<endl;*/
	
/*
	cout<<"isAnagram(diba, adib)? "<<(isAnagram("diba", "adib")? " Yes":" No")<<endl;
	cout<<"isAnagram(diba, aadib)? "<<(isAnagram("diva", "adib")? " Yes":" No")<<endl;
	

	
	cout<<"Count vowels :"<<endl;
	cout<<" ape: "<<countVowels(str1, sizeof(str1)-1)<<endl;
	cout<<" trouble: "<<countVowels(str2, sizeof(str2)-1)<<endl;
	cout<<" moretrouble: "<<countVowelsStr(str3)<<endl<<endl;
*/
}



int main(){

	funWithStrings();
	return 0;

}


