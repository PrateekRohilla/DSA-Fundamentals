//get largest prime factor of a number
#include<iostream>
using namespace std;

bool getPrime(int n){
	
	for(int i=2;i<n;i++){
		if(n%i == 0){
			return false;
		}
	}
	
	return true;
}

main(){
	
	int n;
	cin>>n;
	
	int largefactor = 1;
	int factor = 2;
	
	while(n>1){
		
		if(getPrime(factor)){
			while(n%factor == 0){
				n = n/factor;
				if(factor > largefactor)
					largefactor = factor;
			}
		}
		
		factor++;
		
	}
	
	cout<<largefactor<<endl;
	
}
