#include<iostream>
#include<climits>
using namespace std;

main(){

    //both arrays are sorted in non-decreasing order
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,3,4,5,6};
    int n = 4, m = 5;

    int i = 0, j = 0;

    while(i<n && j<m){
        
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        
        if(arr1[i] < arr2[j])
            i++;

        if(arr1[i] > arr2[j])
            j++;

    }

}