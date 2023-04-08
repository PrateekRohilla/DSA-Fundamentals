#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }

        else if(arr[mid] > key)
            e = mid-1;

        else
            s = mid+1;

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccur(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }

        else if(arr[mid] > key)
            e = mid-1;

        else
            s = mid+1;

        mid = s + (e-s)/2;
    }

    return ans;
}

main(){

    int arr[] = {1,2,3,3,3,3,4,5};
    int n = 8;

    int k = 3;

    int f = firstOccur(arr,n,k);
    int l = lastOccur(arr,n,k);

    int totalOccur;

    if(f == -1 || l == -1)
        totalOccur = -1;
    else
        totalOccur = (l-f) + 1;


    cout<<"Total occurrence of 3 : "<<totalOccur;
}