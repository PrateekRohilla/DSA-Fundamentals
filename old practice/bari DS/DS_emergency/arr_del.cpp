#include<iostream>
using namespace std;
main(){
	
	int a[]={1,3,5,7,9};
	
	int length=5;
	
	cout<<"your elements are : ";
	for(int i=0;i<length;i++)
		cout<<a[i]<<" ";
	
	int del,index;
	cout<<"\nEnter the index of the element you want to delete : ";
	cin>>index;
	index--;
	
	for(int i=index;i<length;i++)
		a[i]=a[i+1];
	length--;
		
	cout<<"\nyour elements are : ";
	for(int i=0;i<length;i++)
		cout<<a[i]<<" ";
	
}
