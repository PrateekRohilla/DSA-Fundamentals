//move all -ve to one side of array
//solved using two pointer approach
#include<iostream>
using namespace std;

main(){
	
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int l = 0,r = n-1;
    
    while(l <= r){
    	
    	if(arr[l]<0 && arr[r]<0)
    		l++;
    		
    	else if(arr[l]>0 && arr[r]<0){
    		
    		swap(arr[l],arr[r]);
    		l++;
    		r--;
    		
		}
    	
    	else if(arr[l]>0 && arr[r>0])
    		r--;
    		
    	else{
    		l++;
    		r--;
		}
    	
	}
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		
}
