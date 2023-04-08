#include<iostream>
using namespace std;
main(){
	
	string s;
	cin>>s;
	
	int i=0;
	int j = s.size()-1;
	
	while(i<j){
		
		if(s[i++]!=s[j--]){
			cout<<"0";
			return 0;
		}
		
	}
	
	cout<<"1";
	
}
