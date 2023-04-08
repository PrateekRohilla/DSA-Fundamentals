#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
	
	int i,j,current;
	
	for(i=1;i<size;i++){
		
		current = arr[i];
		j = i-1;
		
		while(j >= 0 && arr[j] > current){
			
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = current;
		
	}
	
}

main(){
	
	int arr[] = {4,5,1,3,8,1,0,9,6,78,-12};
	int s = sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr,s);
	
	for(int i=0;i<s;i++)
		cout<<arr[i]<<"  ";
	
}
