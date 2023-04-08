#include<iostream>
using namespace std;
main(){
	
	int n;
	cin>>n;
	
	int arr[100];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int unique;
	
	for(int i=0;i<n;i++){
		
		unique = 0;
		
		for(int j=0;j<n;j++){
			
			if(i==j)
				continue;
			
			if(arr[i] == arr[j])
			unique++;
			
		}
		
		if(unique == 0)
			cout<<arr[i]<<"  ";
		
	}
	
}








/*main(){
	
	int n = 9;
	int arr[] = {1,3,1,3,6,6,7,10,7};
	
	int aux[100] = {0};
	
	for(int i=0;i<n;i++)
		aux[arr[i]]++;
	
	int unique;
	
	for(int i=0;i<100;i++){
		
		if(aux[i] == 1){
			unique = aux[i];
			break;
		}
		
	}
	
	cout<<"array : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
		
	cout<<endl<<unique;
	
}*/
