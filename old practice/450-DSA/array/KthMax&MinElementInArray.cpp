#include<iostream>
#include<algorithm>
using namespace std;

int KthSmallest(int a[],int n,int k){
	
	sort(a,a+n);
	return a[k-1];
}

int KthLargest(int a[],int n,int k){
	
	sort(a,a+n,greater<int>());
	return a[k-1];
}

main(){
	
	int arr[] = {6,9,2,5,1,3,4,7,8};
	int n = 9;
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<endl;
	
	int k;
	cin>>k;
	
	cout<<"kth smallest : "<<KthSmallest(arr,n,k)<<endl;
	cout<<"kth largest : "<<KthLargest(arr,n,k)<<endl;
	
}
