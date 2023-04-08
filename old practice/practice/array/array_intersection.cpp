#include<iostream>
using namespace std;
main(){
	
	int n,m;
	cin>>n>>m;
	
	int A[100],B[100];
	
	cout<<"Enter A elements : ";
	for(int i=0;i<n;i++)
		cin>>A[i];
		
	cout<<"Enter B elements : ";
	for(int i=0;i<m;i++)
		cin>>B[i];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			if(A[i] == B[j]){
				cout<<A[i]<<"  ";
				B[j] = INT_MIN;
				break;
			}
			
		}
		
	}
	
	
}
