#include<iostream>
using namespace std;

void swap(int *a,int *b){
	
	int t = *a;
	*a = *b;
	*b = t;
	
}

void selection(int arr[],int size){
	
	int min;
	
	for(int i=0;i<size-1;i++){
		
		min = i;
		
		for(int j=i+1;j<size;j++)
			if(arr[j] < arr[min])
				min = j;
		
		swap(&arr[min],&arr[i]);
	}
	
}

main(){
	
	int arr[] = {4,5,1,3,8,1,0,9,6,78,-12};
	int s = sizeof(arr)/sizeof(arr[0]);
	
	selection(arr,s);
	
	for(int i=0;i<s;i++)
	cout<<arr[i]<<"  ";
}
