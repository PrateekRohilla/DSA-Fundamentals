#include<iostream>
#include<cmath>
using namespace std;
main(){

int n;
int digit,sum=0;
cout<<"Enter the number : ";
cin>>n;
int num=n;
while(n>0){
    digit=n%10;
    sum+=digit*digit*digit;
    n/=10;
}
if(sum==num)
    cout<<endl<<"Yeah..Its a armstrong number!!";
else
    cout<<endl<<"Its not a armstrong number";

}
