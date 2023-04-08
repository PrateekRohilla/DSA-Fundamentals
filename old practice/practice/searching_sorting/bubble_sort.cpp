#include<iostream>
using namespace std;

void swap(int *a,int *b){
	
	int t = *a;
	*a = *b;
	*b = t;
}

void bubbleSort(int arr[], int s){
	
	for(int i=0;i<s-1;i++){
		
		for(int j=0;j<s-i-1;j++)
		  if(arr[j] > arr[j+1])
		    swap(&arr[j],&arr[j+1]);
				
	}
	
}

main(){
	
	int arr[] = {4,5,1,3,8,1,0,9,6,78,-12};
	int s = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,s);
	
	for(int i=0;i<s;i++)
		cout<<arr[i]<<"  ";
	
}
