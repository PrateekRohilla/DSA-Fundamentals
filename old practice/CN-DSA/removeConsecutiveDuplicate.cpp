#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char str[100];
	cin>>str;
	
	int n = strlen(str);
	int j=0;
	
	for(int i=0;i<n;i++)
		if(str[i]!=str[i-1])
			str[j++] = str[i];
	
	str[j] = '\0';
	
	
	cout<<str;
}
