#include<iostream>
#include<string.h>
using namespace std;

void pairStar(char input[],int start){
	
	if(input[start] == '\0')	
		return;
		
	pairStar(input,start+1);
	
	if(input[start] == input[start+1]){
		
		int l = strlen(input);
		input[l+1] = '\0';
		int i;
		for(i=l-1;i>=start+1;i--)
			input[i+1] = input[i];
			
		input[i+1] = '*';
		
	}
	
	
}

main(){
	
	char input[100];
	cin>>input;
	pairStar(input,0);
	cout<<input;

}
