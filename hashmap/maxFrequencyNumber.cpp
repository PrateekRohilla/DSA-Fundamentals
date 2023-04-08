#include<iostream>
#include<unordered_map>
using namespace std;

main(){

    int arr[6] = {1,2,3,2,2,1};
    int n = 6;

    unordered_map<int,int> count;

    int maxFreq = 0;
    int maxAns = 0;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for(int i=0;i<n;i++){
        if(maxFreq == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }

    cout<<maxAns;
}