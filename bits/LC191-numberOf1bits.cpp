#include<iostream>
using namespace std;

main(){

    unsigned int n = 00000000000000000000000000001011;

    int count = 0;

    while(n){
        //checking last bit
        if(n&1)
            count++;

        n = n>>1;
    }

    cout<<count;
}