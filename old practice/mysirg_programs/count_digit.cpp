//count the number of digits
#include<iostream>
main(){

using namespace std;

int cal=0,n,rem;

cout<<"Enter a positive natural number: ";
cin>>n;


while(n!=0){
    n=n/10;
    cal++;
}


cout<<endl<<"There are "<<cal<<" digits in the number";

}
