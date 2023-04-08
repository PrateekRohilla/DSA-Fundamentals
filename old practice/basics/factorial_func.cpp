#include<iostream>
using namespace std;

int facto(int);

main(){

int n;

cout<<"Enter the value of n : ";
cin>>n;

int fact=facto(n);

cout<<"Factorial of "<<n<<" is "<<fact;
}
int facto(int n){
    int res=1;
    for(int i=n;i>=1;i--)
        res*=i;

    return res;

}
