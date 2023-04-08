#include<iostream>
#include<cmath>
using namespace std;
main(){

int a,b,c;

cout<<"Enter the co-efficient of x y z: ";

cin>>a>>b>>c;

int d=(b*b)-(4*a*c);

if(d>0){
    cout<<"\n\nReal and distinct roots..";
    cout<<endl<<endl;
    int x1=((-b)+sqrt(d))/(2*a);
    int x2=((-b)-sqrt(d))/(2*a);
    cout<<"roots are "<<x1<<" "<<x2;
}
else if(d<0){
    cout<<"\n\nNo real roots..";
}
else{
    cout<<"\n\nEqual roots..";
    int x=(-b)/(2*a);

}

}
