#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int [len2];

    //copy values
    int mainArrIndex = s;
    for(int i=0;i<len1;i++)
        first[i] = arr[mainArrIndex++];

    mainArrIndex = mid+1;
    for(int i=0;i<len2;i++)
        second[i] = arr[mainArrIndex++];

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;

    mainArrIndex = s;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2])
            arr[mainArrIndex++] = first[index1++];
        else
            arr[mainArrIndex++] = second[index2++];
    }

    while(index1 < len1)
        arr[mainArrIndex++] = first[index1++];

    while(index2 < len2)
        arr[mainArrIndex++] = second[index2++];

    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s, int e){

    if(s >= e)
        return;

    int mid = (s+e)/2;

    //sort left part
    mergeSort(arr,s,mid);

    //sort right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}

main(){

    int arr[9] = {2,0,6,1,4,9,2,5,3};
    
    mergeSort(arr,0,8);

    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";

}