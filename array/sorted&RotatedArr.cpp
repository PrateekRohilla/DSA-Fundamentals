//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include<iostream>
using namespace std;

main(){
    
    //int nums[] = {3,4,5,1,2};
    //int nums[] = {2,1,3,4};
    int nums[] = {1,1,1};

    int n = 3;

    int k = 0;

    for(int i=1;i<n;i++)
        if(nums[i-1] > nums[i])
            k++;

    if(nums[n-1] > nums[0])
        k++;

    if(k > 1)
        cout<<"false";
    else
        cout<<"true";


}