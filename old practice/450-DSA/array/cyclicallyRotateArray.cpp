#include<iostream>
using namespace std;

main(){
	
	int arr[] = {1,2,3,4,5};
	int n = 5;
	
	int t = arr[n-1];
	for(int i=n-1;i>0;i--)
		arr[i] = arr[i-1];
	
	arr[0] = t;
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	
}
