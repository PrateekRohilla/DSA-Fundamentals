//also called dutch national flag problem  -giving wrong answer
#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void DNF(int a[],int n){
	
	int l = 0,m = 0,h = n-1;
	
	while(m<=h){
		
		if(a[m] == 0){
			swap(&a[l],&a[l]);
			l++;
			m++;
		}
		
		if(a[m] == 1)
			m++;
			
		if(a[m] == 2){
			swap(&a[m],&a[h]);
			h--;
		}
		
	}
	
}

main(){
	
	int a[] = {0,1,2,1,1,0,2,0,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	
	DNF(a,n);
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	
}
