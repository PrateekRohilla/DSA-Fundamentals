#include<iostream>
using namespace std;

main(){

    int arr[] = {1,2,3,4,5};
    int s = 5, n = 5;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == s){
                cout<<min(arr[i],arr[j])<<" ";
                cout<<max(arr[i],arr[j])<<endl;
            }
        }
    }

}