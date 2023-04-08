// return array from function
// methods - allocate dynamic arr, use static, use struct

#include<iostream>
using namespace std;

int* retArr(int *arr){
	for(int i=0;i<10;i++)
		arr[i] = i*i;
		
		return arr;
}

main(){
	
	int* a = new int[10];
	
	int* filledArr = retArr(a);
	
	for(int i=0;i<10;i++)
		cout<<filledArr[i]<<"  ";
}
