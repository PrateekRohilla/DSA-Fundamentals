//https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
#include<iostream>
using namespace std;

int divisorSum(int n){

    int sum = 1;

    for(int i=n;i>=2;i--)
        if(n%i == 0)
            sum += i;

    return sum;
}

main(){

    int n;
    cin>>n;

    int sumOfAll = 1;

    for(int i=n;i>=2;i--)
        sumOfAll += divisorSum(i);

    cout<<endl<<sumOfAll;
}