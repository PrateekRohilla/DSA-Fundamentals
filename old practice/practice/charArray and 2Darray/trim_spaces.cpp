#include<iostream>
using namespace std;

main(){
	
	char str[100];
	cin.getline(str,11);
	
	int n = 11,count = 0;
	
	for(int i=0;i<n;i++){
		
		if(str[i] != ' ')
			str[count++] = str[i];
		
	}
	
	cout<<str;

}
