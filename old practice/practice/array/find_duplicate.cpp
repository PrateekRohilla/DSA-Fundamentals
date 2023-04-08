//find duplicate - worked only for one or two duplicate elements
#include<iostream>
using namespace std;
main(){
	
	int n;
	cin>>n;
	
	int arr[100];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(i==j)
				continue;
			
			if(arr[j] == arr[i]){
				cout<<arr[i]<<"  ";
				break;
			}
			
		}
		
	}
	
	
	
	
}
