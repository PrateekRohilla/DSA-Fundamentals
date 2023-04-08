#include<iostream>
using namespace std;
main(){
	
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	int a[n];
	cout<<"\nfill your array : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\nyour array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		
	int key;
	cout<<"\nEnter the element you want to search : ";
	cin>>key;
	
	int c;
	for(c=0;c<n;c++){
		if(key == a[c]){
			break;		
		}
	}
	
	if(c<n)
		cout<<"\nvalue found at "<<c<<" position";
	else
		cout<<"\nvalue not found ..!!";
	
	
}
