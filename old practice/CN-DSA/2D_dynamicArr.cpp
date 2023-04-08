//2D array created in heap
#include<iostream>
using namespace std;
main(){
	
	int rows,cols;
	
	int **p = new int*[rows];
	
	for(int i=0;i<rows;i++)
		p[i] = new int[cols];
	
	
	//deallocating memory
	for(int i=0;i<rows;i++)
		delete [] p[i];
		
	delete [] p;
	
	
}
