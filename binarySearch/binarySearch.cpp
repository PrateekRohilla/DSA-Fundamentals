#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n-1;

    //smart calculation of mid - to prevent integer overflow
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] > key)
            end = mid-1;

        else
            start = mid+1;

        mid = start + (end-start)/2;
    }

    return -1;
}

main(){

    int even[] = {1,2,3,4,5,6,7,8};
    int odd[] = {1,2,3,4,5};

    cout<<binarySearch(even,8,7)<<endl;

    cout<<binarySearch(odd,5,2)<<endl;


}