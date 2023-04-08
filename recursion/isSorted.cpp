#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
        return false;

    return isSorted(arr+1, size-1);

}

main(){

    int arr[] = {1,2,3,4,8,9};
    int size = 6;

    cout<<isSorted(arr,size);

}