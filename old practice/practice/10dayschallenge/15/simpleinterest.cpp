#include<iostream>
main(){

using namespace std;
float principal,rate,time;
cout<<"Enter the amount on which you want to calculate interest ";
cin>>principal;
cout<<"Enter the rate of interest ";
cin>>rate;
cout<<"Enter the time ";
cin>>time;

float interest=(principal*rate*time)/100;

cout<<"Interest is "<<interest;
}
