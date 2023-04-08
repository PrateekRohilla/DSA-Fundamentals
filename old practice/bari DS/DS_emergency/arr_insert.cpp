#include<iostream>
using namespace std;
main(){
	
	int n;
	cout<<"Enter the size of array : "	;
	cin>>n;
	
	int arr[n]={0};
	
	int length;
	cout<<"\nhow many elements you want to insert : ";
	cin>>length;
	
	cout<<"\nEnter array elements : ";
	for(int i=0;i<length;i++)
		cin>>arr[i];
		
	cout<<"\nwell done \narray elements are : \n";
	for(int i=0;i<length;i++)
		cout<<arr[i]<<" ";
		
	
	int index,e1;		
	cout<<"\nEnter the index and the element : ";
	cin>>index>>e1;
	index--;
	
	if(index>=length){
		arr[index]=e1;
		length++;
	}
	else{
		for(int i=length;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[index]=e1;
		length++;
	}
	
	cout<<"\narray elements are : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";	
	
}
