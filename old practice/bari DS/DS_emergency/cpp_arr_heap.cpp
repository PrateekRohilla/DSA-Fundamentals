#include<iostream>
using namespace std;
main(){
	
	int *p;
	
	p = new int[5];
	
	//for(int i=0;i<5;i++)
		p[0]=1;
		p[1]=2;
		
	
	for(int i=0;i<5;i++)
		cout<<p[i]<<endl;
	
	delete []p;
}
