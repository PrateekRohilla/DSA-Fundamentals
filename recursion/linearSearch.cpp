#include<iostream>
using namespace std;
/*
bool linearSearch(int arr[], int size, int k){

    if(size == 0)
        return false;

    if(arr[0] == k)
        return true;

    return linearSearch(arr+1,size-1,k);

}
*/

//index based - compare key with last element
int linearSearch(int arr[], int size, int k){

    if(size >= 0){
        
        if(arr[size] == k)
            return size;
        else
            return linearSearch(arr, size-1, k);
    }

    else
        return -1;
}

main(){

    int arr[] = {2,7,1,9,5};
    int size = 5;
    int key = 7;
    cout<<linearSearch(arr,size-1,key);

}