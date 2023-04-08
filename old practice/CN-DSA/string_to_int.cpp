//also called - implement atoi function
#include<iostream>
using namespace std;

main(){
	
	char str[100];
	cin>>str;
	
	int num = 0;
	
	for(int i=0;str[i]!='\0';i++){
			
		num += str[i] - '0';
		
		if(str[i+1] != '\0')
			num *=10;
		
	}
	
	cout<<endl<<num;
}
