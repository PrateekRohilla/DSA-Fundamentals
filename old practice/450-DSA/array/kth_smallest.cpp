#include<iostream>
using namespace std;

void swap(int &a,int &b){
	
	int t = a;
	a = b;
	b = t;
	
}

main(){
	
	int arr[] = {4,9,5,2,1,8};
	int n = 6;
	
	int k;
	cin>>k;
	
	for(int i=0;i<k;i++){
		
		int j,p;
		for(j=p=i;j<n;j++){
			
			if(arr[j]<arr[p])
				p = j;
			
		}
		
		swap(arr[i],arr[p]);
	}
	
	
//	for(int i=0;i<n;i++)
//		cout<<arr[i]<<"  ";
	
		cout<<endl<<arr[k-1];
		
		
}
