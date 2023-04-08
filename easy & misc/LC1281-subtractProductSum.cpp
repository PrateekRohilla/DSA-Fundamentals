#include<iostream>
using namespace std;

int subtractProductSum(int n){

    int prod = 1;
    int sum = 0;

    while(n){

        int digit = n%10;
        prod *= digit;
        sum += digit;

        n /= 10;

    }

    return prod-sum;
}

main(){

    int num;
    cin>>num;
    
    cout<<subtractProductSum(num);

}