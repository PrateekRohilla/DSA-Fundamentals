// find first & last occurence of element in sorted array
#include<iostream>
using namespace std;

int first(int a[], int n, int x)
{
	int low = 0, high = n-1, res = -1;
	
	while(low <= high)
	{
		int mid = (low+high)/2;
		
		if(a[mid] == x)
		{
			res = mid;
			high = mid - 1;
		}
		
		else if(x > a[mid])
			low = mid + 1;
			
		else
			high = mid - 1;
	}
	
	return res;
}

int last(int a[], int n, int x)
{
	int low = 0, high = n-1, res = -1;
	
	while(low <= high)
	{
		int mid = (low+high)/2;
		
		if(a[mid] == x)
		{
			res = mid;
			low = mid + 1;
		}
		
		else if(x > a[mid])
			low = mid + 1;
			
		else
			high = mid - 1;
	}
	
	return res;
}

main(){
	
	int n = 10;
	int a[] = {2,4,6,7,9,9,9,12,34,67};
	int x;
	cin>>x;
	
	int firstIndex = first(a,n,x);
	int lastIndex = last(a,n,x);
	
	cout<<"First Index of "<<x<<" : "<<firstIndex<<endl;
	cout<<"Last Index of "<<x<<" : "<<lastIndex<<endl;
}
