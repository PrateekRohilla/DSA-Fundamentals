#include<iostream>
using namespace std;
/*
bool binarySearch(int arr[],int s, int e, int k){

    if(s > e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k)
        return binarySearch(arr, mid+1, e, k);
    else
        return binarySearch(arr, s, mid-1, k);

}
*/

//index based
int binarySearch(int arr[],int s, int e, int k){

    if(s <= e){
        
        int mid = s + (e-s)/2;

        if(arr[mid] == k)
            return mid;

        if(arr[mid] < k)
            return binarySearch(arr, mid+1, e, k);
        else
            return binarySearch(arr, s, mid-1, k);

    }

    return -1;
}

main(){

    int arr[] = {2,4,5,8,9};
    
    int key = 5;
    
    cout<<binarySearch(arr, 0, 4, key);

}