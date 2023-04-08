/*
fill array like this - 1 3 5 6 4 2
for 1 to 6
*/

//code fails for odd values :-(

#include<iostream>
using namespace std;
main(){
	
	int n;
	cin>>n;
	
	int arr[n],value = 1;
	
	int left=0,right=n-1;
	
	for(;left<right;)
	{
		arr[left] = value;
		value++;
		
		arr[right] = value;
		value++;
		
		left++;
		right--;
	}
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	
	
	
}
