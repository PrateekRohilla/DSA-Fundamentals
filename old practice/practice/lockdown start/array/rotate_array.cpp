//rotate array Optimised ---- time - O(n) , space - O(1)
// 1. reverse the entire array
// 2. reverse 0 to d-1 index elements
// 3. reverse d to n-1 index elements

#include<iostream>
using namespace std;

main(){
	
	int n,d;
	cin>>n>>d;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	
	//reverse entire array		
	int i=0;
	int j=n-1;
	while(i<j)
	{
		
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		
			i++;
			j--;
			
	}
	
	
	
	//reverse 0 to d-1
	i=0;
	j=d-1;
	while(i<j)
	{
		
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		
			i++;
			j--;
			
	}
	
	
	
	//reverse d to n-1
	i=d;
	j=n-1;
	while(i<j)
	{
		
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		
			i++;
			j--;
			
	}
	
	
	
	for(int k=0;k<n;k++)
		cout<<a[k]<<" ";
	
	cout<<endl;
}
