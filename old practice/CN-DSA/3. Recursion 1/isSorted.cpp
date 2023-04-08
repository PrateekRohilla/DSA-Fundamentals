#include<iostream>
using namespace std;

bool isSorted(int a[],int size){
	
	if(size == 1)
		return true;
	
	if(a[0] > a[1])
		return false;
	
	return isSorted(a+1,size-1);
	
}

main(){
	
	int a[] = {1,2,3,4,5};
	int size = 5;
	
	cout<<isSorted(a,size);
	
}
