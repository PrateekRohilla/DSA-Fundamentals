#include<iostream>
using namespace std;

int Bsearch(int arr[],int first,int last,int x){
	
	if(first > last)
		return -1;
	
	int mid = (first+last)/2;
	
	if(arr[mid] == x)
		return mid;
		
	if(x < arr[mid])
		return Bsearch(arr,first,mid-1,x);
	
	else
		return Bsearch(arr,mid+1,last,x);
	
}

main(){
	
	int arr[100];
	int n = 10;
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int x;
	cout<<endl<<"which element to search : ";
	cin>>x;
	
	cout<<endl;
	
	int index = Bsearch(arr,0,n-1,x);
	
	if(index != -1)
		cout<<"fount at "<<index;
	else
		cout<<"not found !!";
	
	
}
