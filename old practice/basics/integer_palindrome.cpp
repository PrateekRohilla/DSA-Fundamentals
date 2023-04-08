#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the number : ";
cin>>n;

int rev=0;
int num=n;
while(n>0){
    int digit=n%10;
    rev+=digit;
    n/=10;
    if(n!=0)
        rev*=10;
}
if(rev==num)
    cout<<endl<<"Number is palindrome..";
else
    cout<<endl<<"Number is not palindrome..";
}
