//if array is   a[]={1,2,3,-6,3,-9}   then
//sub array is   [2,3,-6,3]   (element in between should not be skipped)
//sub sequence is   [2,3,3]     (we can skip elements)

//apni kaksha java - interview series --> largest sum sub array or maximum sum sub array



/*
//general solution
#include<iostream>
using namespace std;
main(){
	int a[] = {-1,4,-2,-4,-1,3,5,-6};
	int n = sizeof(a)/sizeof(a[0]);
	
	int max = -15;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int currsum = 0;
			for(int k=i;k<=j;k++){
				currsum+=a[k];
			}
			if(currsum > max){
				max = currsum;
			}
		}
	}
	
	cout<<max;
}
*/


/*
//optimised
//use formula (get sum of a range(from i to j) in array) --> sum[j]-sum[i]+a[i]
//a is the original array and sum is the new array in which we are storing sum ...
#include<iostream>
using namespace std;
main(){
	int a[] = {-1,4,-2,-4,-1,3,5,-6};
	int n = sizeof(a)/sizeof(a[0]);
	
	int sum[n];
	sum[0] = a[0];
	for(int i=1;i<n;i++){
		sum[i] = sum[i-1]+a[i];
	}
	
	int max = -15;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int currsum = sum[j]-sum[i]+a[i];
			if(currsum > max){
				max = currsum;
			}
		}
	}
	
	cout<<max;
}
*/

//using kaden's algorithm --> solve it in only O(n)
#include<iostream>
using namespace std;
main(){
	int a[] = {-1,4,-2,-4,-1,3,5,-6};
	int n = sizeof(a)/sizeof(a[0]);

	int maxsum = -15;
	int currsum = 0;
	
	for(int i=0;i<n;i++){
		currsum+=a[i];
		if(currsum > maxsum){
			maxsum = currsum;
		}
		
		if(currsum < 0){
			currsum = 0;
		}
	}
	
	cout<<maxsum;

}

