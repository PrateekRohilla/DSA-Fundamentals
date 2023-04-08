#include<iostream>
using namespace std;

main(){

    int arr[] = {0,1,2,0,1,2};
    int n = 6;

    int l=0,m=0,h=n-1;

    while(m<=h){

        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }

        else if(arr[m]==1)
            m++;

        else if(arr[m]==2){
            swap(arr[m],arr[h]);
            h--;
        }

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}