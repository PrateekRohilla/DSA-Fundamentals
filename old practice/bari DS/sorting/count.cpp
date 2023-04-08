//count sort
#include<iostream>
using namespace std;
main(){
	
	int a[20] = {15,18,14,4,4,17,5,2,17,7,12,7,27,4,4,1,4,28,8,4};
	
	int n = 20,max = 28;
	
	int c[max+1] = {0};
	
	//output--------------
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		
	cout<<endl<<endl;
	
	for(int i=0;i<=max;i++)
		cout<<c[i]<<"  ";
	
	cout<<endl<<endl;
	cout<<endl<<endl;
	//--------------------
	
	
	
	for(int i=0;i<n;i++)
		c[a[i]]++;
	
	
	
	//output--------------
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		
	cout<<endl<<endl;
	
	for(int i=0;i<=max;i++)
		cout<<c[i]<<"  ";
	
	cout<<endl<<endl;
	cout<<endl<<endl;
	//--------------------
	
	int i=0,j=0;
	while(i<=max){
		if(c[i]>0){
			a[j++] = i;
			c[i]--;
		}
		else
			i++;
	}
	
	
	//output--------------
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		
	cout<<endl<<endl;
	
	for(int i=0;i<=max;i++)
		cout<<c[i]<<"  ";
	
	cout<<endl<<endl;
	cout<<endl<<endl;
	//--------------------
	
}
	
	
	

