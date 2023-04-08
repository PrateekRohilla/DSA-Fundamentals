#include<iostream>
using namespace std;
main(){
	
//	int t;
//	cin>>t;
	
//	while(t--){
	    long int n;
	cin>>n;
	long int a[n];
	
	for(long int i=0;i<n;i++)
		cin>>a[i];
		
	long long int max1 = a[0];
	long long int max2 = a[0];	
	
	for(long int i=0;i<n;i++){
		if(a[i]>max1)
		max1 = a[i];
	}
	
	for(long int i=0;i<n;i++){
		if(a[i] == max1)
			continue;
		if(a[i]>max2)
		max2 = a[i];
	}
	
	long long int res = max1*max2;
	cout<<res;
//	}
}
