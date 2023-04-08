#include<iostream>
using namespace std;

int arraySum(int arr[], int size){

    if(size == 0)
        return 0;

    if(size == 1)
        return arr[0];

    return arr[0] + arraySum(arr+1,size-1);

}

main(){

    int arr[] = {5,5,5,5,5};
    int size = 5;

    cout<<arraySum(arr,size);

}