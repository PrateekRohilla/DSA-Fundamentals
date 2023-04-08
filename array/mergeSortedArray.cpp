//https://leetcode.com/problems/merge-sorted-array/
#include<iostream>
using namespace std;

main(){

    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int n = 3, m = 3;

    int p1 = m-1;
    int p2 = n-1;
    int i = (m+n)-1;

    while(p2 >= 0){

        if(p1 >= 0 && nums1[p1] > nums2[p2])
            nums1[i--] = nums1[p1--];
        else
            nums1[i--] = nums2[p2--];

    }
    
    for(int j=0;j<m+n;j++)
        cout<<nums1[j]<<" ";
}