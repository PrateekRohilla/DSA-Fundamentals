#include<iostream>
using namespace std;

void swap(int &a,int &b){
	
	int t = a;
	a = b;
	b = t;
	
}

main(){
	
	int arr[] = {7,2,9,1,8,3,6};
	int n = 7;
	
	for(int i=0;i<n-1;i++){
		
		int j,k;
		for(j=k=i;j<n;j++){
			
			if(arr[j]<arr[k])
				k=j;
			
		}
		
		swap(arr[i],arr[k]);
		
	}
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	
}
