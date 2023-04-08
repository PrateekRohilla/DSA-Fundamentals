#include<iostream>
using namespace std;

//naive approach
/*int second_large(int arr[],int n){

	int largest = INT_MIN;
	int result = INT_MIN;
	
	for(int i=0;i<n;i++)
		if(arr[i] > largest)
			largest = arr[i];
			
	for(int i=0;i<n;i++)
		if(result < arr[i] && arr[i] < largest)
				result = arr[i];
				
	return result;
}*/

//efficient approach
int secondLarge(int arr[],int n){
	
	int largest = INT_MIN;
	int result = INT_MIN;
	
	for(int i=0;i<n;i++){
		
		if(arr[i] > largest){
			result = largest;
			largest = arr[i];
		}
		else if(arr[i] != largest){
			if(result == INT_MIN || result < arr[i])
				result = arr[i];
		}
		
	}
	
	return result;
}

main(){
	
	int arr[] = {90, 8, 90, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	//cout<<second_large(arr,n);
	cout<<secondLarge(arr,n);
	
}
