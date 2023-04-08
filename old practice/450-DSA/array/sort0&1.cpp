#include<iostream>
using namespace std;

main(){
	
	int a[] = {0,1,0,1,1,1,0,0,1,0,0,1,1};
	int n = sizeof(a)/sizeof(a[0]);
	
	cout<<"Array : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	int l=0,r=n-1;
	
	while(l<r){
		
		while(a[l]==0 && l<r)
			l++;
			
		while(a[r]==1 && l<r)
			r--;
			
		if(l<r){
			a[l] = 0;
			a[r] = 1;
			l++;
			r--;
		}
		
	}
	
	cout<<"Array : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
}
