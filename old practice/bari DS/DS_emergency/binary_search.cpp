#include<iostream>
using namespace std;
main(){
	
	int n=10;
	int a[n]={1,2,3,4,5,6,7,8,9,20};
	
	cout<<"your array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	int key;
	cout<<"\nEnter the element you want to search : ";
	cin>>key;
	
	int l=0,h=n-1;
	int mid;
	
	while(l<=h){
		
		mid=(l+h)/2;
		
		if(key == a[mid]){
			cout<<"\nElement found at "<<mid<<" position";
				return 0;
		}
		
		else if(key<a[mid])
			h=mid-1;
			
		else
			l=mid+1;
		
	}
	
	cout<<"\nNot found ..!!";
}
