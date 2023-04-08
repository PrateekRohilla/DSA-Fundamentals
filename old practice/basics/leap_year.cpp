#include<iostream>
using namespace std;
main(){

int year;

cout<<"Enter the year : ";
cin>>year;

if(year%400==0){
    if(year%4==0){
        cout<<"\n\nIts a leap year";
    }
    else if(year%100 !=0){
        cout<<"\n\nNot a leap year";
    }
}
else
    cout<<endl<<"Not a leap year";

}
