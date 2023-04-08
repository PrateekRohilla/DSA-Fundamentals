#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    int i,j;

    for(i=0;i<n-1;i++){

        int minIndex = i;

        for(j=i+1;j<n;j++)
            if(arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[i],arr[minIndex]);

    }

}

main(){

    int arr[] = {9,1,0,4,7,1,11,2};
    int n = 8;

    selectionSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;

}