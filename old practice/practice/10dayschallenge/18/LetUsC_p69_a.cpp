#include<iostream>
main(){

using namespace std;

int year;

cout<<"Enter the year: ";
cin>>year;

if((year%4==0)||((year%100!=0)&&(year%400==0)))
    cout<<"year is leap";
else
    cout<<"year is not leap";
}
