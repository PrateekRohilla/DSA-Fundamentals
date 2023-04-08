#include<iostream>
#include<cmath>
main(){

using namespace std;

int x1,x2,x3,y1,y2,y3;
double AB,BC,AC;

cout<<"Enter the x & y coordinates of A point: ";
cin>>x1>>y1;
cout<<endl<<"Enter the x & y coordinates of B point: ";
cin>>x2>>y2;
cout<<endl<<"Enter the x & y coordinates of C point: ";
cin>>x3>>y3;

AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
BC=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
AC=sqrt(pow((x1-x3),2)+pow((y1-y3),2));

if((AB+BC)==AC)
            cout<<endl<<"Points fall on a straight line";
else if((BC+AC)==AB)
            cout<<endl<<"Points fall on a straight line";
else if((AC+AB)==BC)
            cout<<endl<<"Points fall on a straight line";
else
            cout<<endl<<"Points does not fall on a straight line";
}
