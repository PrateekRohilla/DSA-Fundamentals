//3sum leetcode
#include<iostream>
#include<algorithm>
using namespace std;

main(){

    int arr[] = {10, 5, 5, 5, 2};
    int sum = 12;

    int n = 5;

    int l,r;

    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){

        l = i+1;
        r = n-1;

        while(l<r){
            
            if(arr[i]+arr[l]+arr[r] == sum){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                return 0;
            }

            else if(arr[i]+arr[l]+arr[r] < sum)
                l++;

            else
                r--;

        }

    }

}