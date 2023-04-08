#include<iostream>
using namespace std;
main(){
	
	int n,sum;
	cin>>n>>sum;
	
	int arr[100],count=0;
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(i==j)
				continue;
			
			if(arr[i]+arr[j] == sum)
				count++;
			
		}
	}
	
	cout<<endl<<count;
}
