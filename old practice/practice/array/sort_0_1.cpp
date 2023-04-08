#include<iostream>
using namespace std;
main(){
	
	int n;
	cin>>n;
	
	int arr[100];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	
	//approach 1 - count 0s then fill array with 0 & 1
	int count = 0;
	
	for(int i=0;i<n;i++)
		if(arr[i] == 0)
			count++;
			
	for(int i=0;i<n;i++){
		if(count){
			arr[i] = 0;
			count--;
		}
		else{
			arr[i] = 1;
		}
	}
	
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i];
}
