#include<iostream>
using namespace std;
main(){

int n,sum=0;

cout<<"Enter the value of n: ";
cin>>n;
/*
for(int i=1;i<=n;i++){
    sum+=i;
}
*/
sum=(n*(n+1))/2;
cout<<endl<<"Sum of first "<<n<<" natural number is "<<sum;
}
