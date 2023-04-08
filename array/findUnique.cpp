#include<iostream>
using namespace std;

main(){

    int arr[] = {1,2,3,4,3,2,1};
    int n = 7;

    int res = arr[0];

    for(int i=1;i<n;i++)
        res = res ^ arr[i];

    cout<<res<<endl;
}