#include<iostream>
main(){

using namespace std;

int a,b,c,sum,largest;

cout<<"Enter the three sides of rectangle: ";
cin>>a>>b>>c;

//((a+b>c)||(a+c>b)||(b+c>a))?cout<<"Its a valid triangle":cout<<"Its not a valid triangle";

if(a>b){
    if(a>c){
           largest=a;
           sum=b+c;
    }
    else{
        largest=c;
        sum=a+b;
    }
}
else{
    if(b>c){
        largest=b;
        sum=a+c;
    }
    else{
        largest=c;
        sum=a+b;
    }
}

(sum>largest)?cout<<"Its a valid triangle":cout<<"Its not a valid triangle";
}
