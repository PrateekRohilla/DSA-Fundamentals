#include<iostream>
using namespace std;

int CountSetBits(int n){

    int count = 0;

    while(n){

        if(n&1)
            count++;

        n = n >> 1;
    }

    return count;
}

main(){

    int t = 5;

    while(t--){
        int n;
        cin>>n;

        cout<<CountSetBits(n);

        cout<<endl<<endl;
    }


}