#include<iostream>
using namespace std;
main(){
	
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int d;
	cin>>d;
	
	int t;
	
	while(d--){
		
		t = arr[0];
		
		for(int i=0;i<n-1;i++)
			arr[i] = arr[i+1];
		
		arr[n-1] = t;
		
	}
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	
}
