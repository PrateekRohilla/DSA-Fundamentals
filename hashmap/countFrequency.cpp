#include<iostream>
#include<unordered_map>
using namespace std;

void frequency(int arr[],int n){
    
    unordered_map<int, int> count;

    for(int i=0;i<n;i++)
        count[arr[i]]++;

    for(auto x: count)
        cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    
    int arr[] = {2,3,4,6,8,7,2,5,7,9,6,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    frequency(arr,n);

    return 0;
}