//incorrect
#include<iostream>
using namespace std;

void sumArr(int arr1[],int arr2[],int sum[],int n,int m,int l){
	
	//int i = n,j = m,k = l;
	
	int t,c = 0;
	
	int i = n<m?n:m;
	int j = m>n?m:n;
	int k = l;
	
	while(i != -1 && j !=-1){
		
		t = arr1[i] + arr2[j] + c;
			c = 0;
		if(t < 10)
			sum[k] = t;
		else{
			sum[k] = t%10;
			c = t/10;
		}
		
		i--; j--; k--;
		
	}
	
	while(i > -1){
		t = arr1[i] + c;
			c = 0;
		if(t < 10)
			sum[k] = t;
		else{
			sum[k] = t%10;
			c = t/10;
		}
		
		i--;k--;
		
	}
	
	while(j > -1){
		t = arr2[j] + c;
			c = 0;
		if(t < 10)
			sum[k] = t;
		else{
			sum[k] = t%10;
			c = t/10;
		}
		
		j--;k--;
		
	}
	
	
	for(int f=0;f<l;f++)
		cout<<sum[f]<<"  ";
	
}

main(){
	
	//i/p - 6 2 4;7 5 6   : o/p - 1 3 8 0

	//i/p - 8 5 2;1 3  : o/p - 0 8 6 5
	
	//i/p - 9 7 6 1;4 5 9  : o/p - 1 0 2 2 0 
	
	int arr1[] = {9, 7, 6, 1};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[] = {4, 5, 9};
	int m = sizeof(arr2)/sizeof(arr2[0]);
	
	int l = n>m?n:m;
	int sum[l+1] = {0};
	
	sumArr(arr1,arr2,sum,n,m,l);
	
}
