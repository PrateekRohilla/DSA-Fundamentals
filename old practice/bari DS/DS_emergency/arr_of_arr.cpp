#include<iostream>
using namespace std;
main(){
	
	//array of pointers
	int *a[3];
	
	//storing an array in each location of pointers of array
	a[0] = new int [5];
	a[1] = new int [5];
	a[2] = new int [5];
	
	//access it like 2d array
	a[1][2]=15;
	
	cout<<a[1][2];
	
}
