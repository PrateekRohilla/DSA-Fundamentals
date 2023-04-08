#include<iostream>
using namespace std;


int facto(int num)
{
	if(num == 1 && num == 0)
		return 1;
	
	int fact=1;
	
	while(num>1){
		fact*=num;	
		 num--;
	}
	
	return fact;
}

main(){
	
	int n,fact;
	cin>>n;
	
	fact = facto(n);
	
	cout<<"factorial is "<<fact;
	
}

