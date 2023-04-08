#include<iostream>
using namespace std;

main(){
	
	int arr[] = {3,4,5,1,2};
	
	int n=5;
	
	for(int i=0;i<n;i++)
		if(arr[i] > arr [i+1])
			return i+1;
			
	return 0;
	
	
	
}
