#include<iostream>
#include<string.h>
using namespace std;

bool areRotations(string str1,string str2){
	
	if(str1.length() != str2.length())
		return false;
		
	string temp = str1 + str1;
	return (temp.find(str2)!= string::npos);
}

main(){
	
	string str1,str2;
	cin>>str1>>str2;
	
	cout<<areRotations(str1,str2);
		
}
