/*

bubble sort --> 
				max --> O(n*n)
				min --> O(n)  when the array is already sorted
make adaptive by flag --> if already sorted then break
						  make flag zero in the pass(first) loop 
						  so that if the remaianing array is sorted then it will break
						  and swap(second) loop only execute when required

*/

#include<iostream>
using namespace std;
int main(){
	
	//int a[] = {12,23,34,45,56,56,89};
	int a[] = {5,4,3,1,89,3,9};
	int n = 7;
	
	cout<<"Array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
	int flag;
	
	for(int i=0;i<n-1;i++){
		flag = 0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
			
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
				flag = 1;
			}
		}
		if(flag==0)
			break;
	}
	
	
	cout<<"\n\nSorted Array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
}
