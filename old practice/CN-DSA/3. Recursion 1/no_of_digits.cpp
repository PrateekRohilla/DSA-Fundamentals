#include<iostream>
using namespace std;

int digit(int n){
	
	if(n <= 9)
		return 1;
	return 1 + digit(n/10);
	
}

main(){
	
	int n;
	cin>>n;
	
	cout<<digit(n);
	
}
