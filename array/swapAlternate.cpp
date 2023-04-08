#include<iostream>
using namespace std;

main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;

    for(int i=0;i<n;i=i+2){
        if(i+1 < n)
            swap(arr[i],arr[i+1]);
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;
}