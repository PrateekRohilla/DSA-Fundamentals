//sum of digits
#include<iostream>
main(){

using namespace std;

int i,n,rem,sum=0;

cout<<"Enter the number: ";
cin>>n;

while(n!=0){
    rem=n%10;
    sum+=rem;
    n=n/10;
}

cout<<"Sum of the digits of the number is "<<sum;

}
