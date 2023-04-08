#include<iostream>
using namespace std;

main(){
	
	char str[] = "abcd";
	int n = 4;
	
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			
			for(int k=i;k<=j;k++)
				cout<<str[k];
			
			cout<<"  ";
			
		}
		
	}
	
	
	
}
