#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char str[100];
	
	cin>>str;
	
	int n = strlen(str);
	
	int i = 1;
	int j = 0;
	
	while(i<n){
		
		if(str[j] != str[i]){
			j++;
			str[j] = str[i];
		}
		i++;
	}
	
	str[++j] = '\0';
	
	cout<<str;
		
}
