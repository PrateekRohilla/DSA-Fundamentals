#include<iostream>
using namespace std;

int climbStairs(int nStairs){

    if(nStairs < 0)
        return 0;

    if(nStairs == 0)
        return 1;
    
    return climbStairs(nStairs-1) + climbStairs(nStairs-2);

}

main(){

    int n;
    cin>>n;

    cout<<climbStairs(n);

}