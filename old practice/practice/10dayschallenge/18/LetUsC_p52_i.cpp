#include<iostream>
main(){

using namespace std;

float l,b;

cout<<"Enter the length and breadth of rectagle respectively: ";
cin>>l>>b;

if((2*(l+b))<(l*b))
    cout<<"Area of rectangle is greater than its perimeter";
else
    cout<<"Area of rectangle is not greater than its perimeter";

}
