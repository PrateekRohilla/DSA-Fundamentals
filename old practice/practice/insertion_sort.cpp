#include<iostream>
using namespace std;

void insertion(int arr[],int n){
	
	for(int i=1;i<n;i++){
		
		int current = arr[i];
		
		int j;
		for(j=i-1;j>=0;j--){
			
			if(current < arr[j])
				arr[j+1] = arr[j];
			else
				break;
		}
		
		arr[j+1] = current;
		
	}
	
}

main(){
	
	int arr[] = {5,7,1,0,2,6,3,99,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertion(arr,n);
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	
}
