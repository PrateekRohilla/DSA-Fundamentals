//sum of first n od natural numbers
#include<iostream>
main(){

using namespace std;

int n,i,sum=0;

cout<<"Upto how much odd values you want the sum..... Pls Enter: ";
cin>>n;

cout<<endl<<endl<<"Odd numbers are: "<<endl;


for(i=1;i<(n*2);i++){
        if(i%2!=0){
            cout<<i<<endl;
            sum+=i;
        }
}

cout<<endl<<endl<<"Sum is "<<sum;

}
