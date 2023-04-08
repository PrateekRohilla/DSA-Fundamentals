//input 3 sides of triangle & calculate area of triangle
#include<iostream>
#include<math.h>
main(){

using namespace std;

int a,b,c;
float s,area;

cout<<"Enter the sides of the triangle: ";
cin>>a>>b>>c;

s=(a+b+c)/2;

area=sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"Area of triangle is "<<area;
}
