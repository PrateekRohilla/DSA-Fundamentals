#include<iostream>
using namespace std;

main(){
	
	char ring[100];
	
	cin>>ring;
	
	char a,b;
	
	cin>>a>>b;
	
	for(int i=0;ring[i] != '\0';i++){
		
		if(ring[i] == a)
			ring[i] = b;
	}
	
	cout<<ring;
	
}
