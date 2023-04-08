#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int arr[],int n){
	
	struct Pair minmax;
	
	//if array has only two elements
	if(n==1){
		minmax.max = arr[0];
		minmax.min = arr[0];
		
		return minmax;
	}
	
	//intialize min & max with starting values of array
	if(arr[0] < arr[1]){
		minmax.min = arr[0];
		minmax.max = arr[1];
	}
	else{
		minmax.max = arr[0];
		minmax.min = arr[1];	
	}
	
	
	for(int i=2;i<n;i++){
		
		if(arr[i] > minmax.max)	
			minmax.max = arr[i];
		
		else if(arr[i] < minmax.min)
			minmax.min = arr[i];
		
	}
	
	return minmax;
}

main(){
	
	int arr[] = {7,1,0,3,8,2,9};
	int n = 7;
	
	struct Pair minmax = getMinMax(arr,n);
	
	cout<<"min : "<<minmax.min<<endl;
	cout<<"max : "<<minmax.max<<endl;
	
}
