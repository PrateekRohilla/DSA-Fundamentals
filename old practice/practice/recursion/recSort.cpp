#include<iostream>
using namespace std;

int* recSort(int arr[], int n){
	
	if(n==1)
		return arr;
		
	if(arr[0] > arr[1])
		swap(arr[0],arr[1]);
		
	return recSort(arr+1,n-1);
	
}

main(){
	
	int *a = new int[10] {4,6,3,7,9,2,8,5,0,1};
	int n=10;
	
	int* newArr = recSort(a,n);
	
	for(int i=0;i<n;i++)
		cout<<newArr[i]<<"  ";
}
