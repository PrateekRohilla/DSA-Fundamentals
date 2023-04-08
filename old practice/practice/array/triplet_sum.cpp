#include<iostream>
using namespace std;
main(){
	
	int n,sum;
	cin>>n>>sum;
	
	int arr[100];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int count=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			for(int k=j+1;k<n;k++){
				
				if(arr[i]+arr[j]+arr[k] == sum){
					count++;
					break;
				}
				
			}
		}
	}
	
	cout<<endl<<count;
	
}
