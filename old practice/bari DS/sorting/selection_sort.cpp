#include<iostream>
using namespace std;
main(){
	
	int a[] = {5,4,3,1,89,53,9};
	int n = 7;
	
	cout<<"Array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		
	for(int i=0;i<n-1;i++){
		
		int k,j;
		
		for(k=j=i;j<n;j++){
			if(a[j]<a[k])	
				k=j;
				
		}
		
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
		
	}
	
	cout<<endl<<endl;
	
	cout<<"Array after sorting : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
}
