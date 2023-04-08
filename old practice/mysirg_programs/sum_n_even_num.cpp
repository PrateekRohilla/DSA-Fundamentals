//sum of first n even natural numbers
#include<iostream>
main(){

using namespace std;

int i,n,sum=0;

cout<<"Upto how much value of even number you want the sum ... Pls enter: ";
cin>>n;

cout<<endl<<"Even numbers are: "<<endl;

for(i=1;i<=(n*2);i++){
    if(i%2==0){
        cout<<i<<endl;
        sum+=i;
    }
}

cout<<endl<<"Sum of first n even number is "<<sum<<endl<<endl;

}
