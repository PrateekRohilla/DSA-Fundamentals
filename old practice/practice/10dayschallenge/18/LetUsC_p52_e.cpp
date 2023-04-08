#include<iostream>
main(){

using namespace std;

int n,rem,rev=0;

cout<<"Enter a five digit number: ";
cin>>n;

int number=n;

rem=n%10;
rev+=rem*10000;
n=n/10;
rem=n%10;
rev+=rem*1000;
n=n/10;
rem=n%10;
rev+=rem*100;
n=n/10;
rem=n%10;
rev+=rem*10;
n=n/10;
rem=n%10;
n=n/10;
rev+=rem;

cout<<"Reverse number is "<<rev;

if(number==rev){
    cout<<endl<<"Reverse of number is equal to number";
}
else{
    cout<<endl<<"Reverse of number is not equal to number";
}
}
