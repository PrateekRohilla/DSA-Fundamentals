#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i=1;i<n;i++){

        int t = arr[i];
        int j = i-1;
        
        while(j>-1 && arr[j] > t){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = t;
    }
}

main(){

    int arr[] = {9,1,0,4,7,1,11,2};
    int n = 8;

    insertionSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;

}