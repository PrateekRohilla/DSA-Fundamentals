#include<iostream>
using namespace std;
main(){
	
	int *p;
	int a=10;
	int i;
	
	p=new int[5];
	
	for(i=0;i<5;i++)
		p[i]=a++;
		
		cout<<endl;
		
	for(i=0;i<5;i++)
		cout<<p[i]<<endl;
		
	
}
