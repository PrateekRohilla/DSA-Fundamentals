#include<iostream>
main(){
#define pi 3.14

using namespace std;

float R,r;

cout<<"Enter the radius of Large and smaller circle respectiely (from centre of the smaller circle) ";
cin>>R>>r;

float area=(pi*R*R)-(pi*r*r);
//float area=pi*r*r;
//float AREA=pi*R*R;
//float ringArea=AREA-area;
cout<<"Area of the ring is "<<area;
}
