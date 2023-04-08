#include<iostream>
#include<string.h>
using namespace std;

void RCD(char input[]){
	
	if(input[0] == '\0')
		return;
		
	if(input[0] == input[1]){
		
		int  i=0;
		while(input[i]!='\0'){
			input[i] = input[i+1];
			i++;
		}
		
		input[i] = '\0';
		
		RCD(input);
	}
	
	RCD(input+1);
}

main(){
	
	char input[100];
	cin>>input;
	
	RCD(input);
	
	cout<<input;
	
}
