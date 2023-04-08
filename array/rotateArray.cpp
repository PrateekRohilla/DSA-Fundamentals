#include<iostream>
using namespace std;

main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    
    int k = 2;

    int t[5];

    for(int i=0;i<5;i++)
        t[(i+k)%n] = arr[i];

    for(int i=0;i<5;i++)
        arr[i] = t[i];

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

}