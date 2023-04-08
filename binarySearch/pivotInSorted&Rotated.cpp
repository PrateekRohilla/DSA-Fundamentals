//find pivot in sorted & rotated array
//here we're finding minimum element as pivot
#include<iostream>
using namespace std;

int findPivot(int arr[], int n){

    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0])
            s = mid+1;

        else
            e = mid;
        
        mid = s + (e-s)/2;
    }

    return s;
}

main(){

    int arr[] = {8,10,17,1,3};
    int n = 5;

    cout<<findPivot(arr,n)<<endl;

}