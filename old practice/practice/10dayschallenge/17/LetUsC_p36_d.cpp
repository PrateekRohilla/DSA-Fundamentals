#include<iostream>
#include<cmath>
main(){

using namespace std;

double x,y,r,radian,theta;

cout<<"Enter the coordinates x & y : ";
cin>>x>>y;

r=sqrt(x*x+y*y);
radian=atan2(y,x);
theta=radian*180/3.14;    //converting into degrees
cout<<"\nPolar coordinates are "<<r<<"\t"<<theta;
}
