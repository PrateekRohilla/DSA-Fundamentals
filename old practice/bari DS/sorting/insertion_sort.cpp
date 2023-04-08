#include<iostream>
using namespace std;
main(){
	
	int a[] = {2,7,4,6,8,91,2,3};
	int n = 8;
	
	cout<<"Array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
	//first loop for passes 
	for(int i=1;i<n;i++){
		
		int j=i-1;
		int temp = a[i];
		
		while(j>-1 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		
		a[j+1] = temp;
	}
	
	cout<<endl<<endl;
	cout<<"Array after sorting : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
}
