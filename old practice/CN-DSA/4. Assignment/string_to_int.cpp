#include<iostream>
using namespace std;

int stoi(char input[]){	
	
	if(input[0] == '\0')
		return 0;
	
	int num = input[0] - '0';
	if(input[1]!='\0')
		num *= 10;
		
	return num + stoi(input+1);
	
}

main(){
	
	char input[100];
	cin>>input;
	
	cout<<stoi(input);
	
}
