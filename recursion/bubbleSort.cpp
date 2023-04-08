#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    if(n == 0 || n ==1)
        return ;

    //put largest element to end
    for(int i=0;i<n-1;i++)
        if(arr[i] > arr[i+1])
            swap(arr[i],arr[i+1]);

    bubbleSort(arr,n-1);

}

main(){

    int arr[] = {2,9,1,5,6};
    int n = 5;

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}