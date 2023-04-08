#include<iostream>
using namespace std;

//brute force solution
string rotate(string str){
	
	char t = str[0];
	
	for(int i=1;i<str.length();i++)
		str[i-1] = str[i];
	
	int l = str.length()-1;
	str[l] = t;
	return str;
}
main(){
	
	string str,str2;
	cin>>str>>str2;
	
	for(int i=0;i<str.length()-2;i++){
		
		str = rotate(str);
		if(str == str2){
			cout<<"true";
			return 0;
		}
	}
	
	cout<<"false";
	
}
