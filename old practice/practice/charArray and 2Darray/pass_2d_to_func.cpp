#include<iostream>
using namespace std;

void printArr(int a[][5],int n,int m){
	
	for(int i=0;i<n;i++){
			
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<"  ";
		
		cout<<endl;
	}
	
}

main(){
	
	int a[5][5] = {{1,2},{3,4},{5,6}};
	
	int n = 5,m = 5;
	
	printArr(a,n,m);
	
	
}
