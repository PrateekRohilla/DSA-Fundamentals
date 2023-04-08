//sorted array is rotated by k, find value of k
#include<iostream>
using namespace std;

//my noob approach
int checkRotate(int arr[],int n){
	
	int k = 0;
	
	int flag = 1;
	while(flag){
		
		int t = arr[0];
		
		for(int i=1;i<n;i++)
			arr[i-1] = arr[i];
		arr[n-1] = t;
		
		if(arr[n-1] > arr[n-2])
			k++;
		else
			flag = 0;
	}
	return k;
}

//using linear search 
int checkRotateLinear(int arr[],int n){
	
	int min = arr[0],min_index = 0;
	
	for(int i=0;i<n;i++){
		
		if(arr[i] < min){
			min = arr[i];
			min_index = i;
		}
		
	}
	
	return min_index;
	
}


main(){
	
	int arr[] = {5, 6, 1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	//cout<<checkRotate(arr,n);
	cout<<checkRotateLinear(arr,n);
	
}
