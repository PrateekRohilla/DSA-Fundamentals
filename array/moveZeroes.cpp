#include<iostream>
using namespace std;

main(){

    int nums[] = {0,1,0,3,12};
    //int nums[] = {2,0,1,3,0,0,0,0};

    int n = 5;

    int i = 0, j = 0;
    while(j<n){

        while(nums[j] == 0 && j<n)
            j++;

        if(nums[j] != 0 && j<n){
            swap(nums[i],nums[j]);
            i++;
        }
        j++;

    }

    for(int k=0;k<n;k++)
        cout<<nums[k]<<" ";

}