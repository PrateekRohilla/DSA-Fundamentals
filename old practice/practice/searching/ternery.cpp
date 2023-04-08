#include<iostream>
using namespace std;
main(){
	
	int a[10] = {2,3,4,5,6,7,8,9,23,34};
	int n=10;
	
	cout<<"array is : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	
	int value;
	
	cout<<"\n\nEnter the value you want to search : ";
	cin>>value;
	
	int l=0,r=n-1;
	
	while(r>=l){
		
		int mid1 = l+(r-l)/3;
		int mid2 = r-(r-l)/3;
		
		if(value == a[mid1])
			return mid1;
				
		else if(value == a[mid2])
			return mid2;
		
		else if(value < a[mid1])
			r = mid1-1;
		
		else if(value > a[mid2])
			l = mid2+1;
			
		else{
			l = mid1+1;
			r = mid2-1;
		}
		
	}
	
	return -1;
}
