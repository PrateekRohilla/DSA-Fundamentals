#include<iostream>
using namespace std;

int binary(int a[],int size,int n){
	
	int mid, start = 0, end = size-1;
	
	while(start <= end){
		
		mid = (start+end)/2;
		
		if(a[mid] == n)
			return mid;
			
		else if(n < a[mid])
			end = mid-1;
		
		else
			start = mid+1;
		
	}
	
	return -1;
	
}

main(){
	
	int arr[10] = {2,4,6,7,8,9,10,12,34,50};
	
	cout<<"Array is : ";
	for(int i=0;i<10;i++)
		cout<<arr[i]<<"  ";
	cout<<endl<<endl;
	
	int n;
	cin>>n;
	
	
	int result = binary(arr,10,n);
	
	if(result == -1){
		cout<<"element not found";
		return 0;
	}
	
	cout<<"element found at position "<<result;
	
}
