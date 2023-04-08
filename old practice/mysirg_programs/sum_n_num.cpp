#include<iostream>
main(){

using namespace std;

int i,n,sum=0;

cout<<"Upto how much value you want the sum.......Pls enter: ";
cin>>n;

for(i=1;i<=n;i++){
    //sum+=i;
    sum=(n*(n+1))/2;
}
cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
}
