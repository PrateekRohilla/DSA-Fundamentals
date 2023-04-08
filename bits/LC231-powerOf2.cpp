//https://leetcode.com/problems/power-of-two/
#include<iostream>
using namespace std;

bool powerOfTwo(int n){

    bool flag = false;

    while(n != 0){
        if(flag)
            return false;

        if(n&1)
            flag = true;

        n = n >> 1;
    }

    return true;
}

main(){

    int t = 10;

    while(t--){
        int n;
        cin>>n;

        cout<<powerOfTwo(n);

        cout<<endl<<endl;
    }
}