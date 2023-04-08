#include<iostream>
main(){

using namespace std;

float dist;

cout<<"Enter the distance between two cities (in KM) ";
cin>>dist;
cout<<endl;
cout<<"Distance between two cities in Meters is "<<dist*1000<<endl;
cout<<"Distance between two cities in Feet is "<<dist*3280.84<<endl;
cout<<"Distance between two cities in inches is "<<dist*39370.079<<endl;
cout<<"Distance between two cities in centimeters is "<<dist*100000<<endl;
}
