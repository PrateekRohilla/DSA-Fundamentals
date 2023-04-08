//https://leetcode.com/problems/find-pivot-index/
//also knows as equilibrium point in array
#include<iostream>
using namespace std;

int equilibrium(int arr[], int n){

    //if only one element return itself
    if(n == 1)
        return 0;
    
    //in case of 2 elements equi. index not possible
    if(n == 2)
        return -1;

    int sum = 0; //initialize sum of whole array
    int leftSum = 0;

    //find sum of whole array
    for(int i=0;i<n;++i)
        sum += arr[i];

    for(int i=0;i<n;++i){

        sum -= arr[i]; //sum is now right sum for index i

        if(leftSum == sum)
            return i;

        leftSum += arr[i];

    }

    //if no index found
    return -1;
}

main(){

    int arr[] = {1,7,3,6,5,6};
    int n = 6;

    cout<<equilibrium(arr,n)<<endl;

}