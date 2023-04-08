#include<iostream>
main(){

using namespace std;

int year;

cout<<"Enter the year: ";
cin>>year;

year%100==0?(year%400==0?cout<<"Its a leap year":cout<<"Its not a leap year"):(year%4==0?cout<<"Its a leap year":cout<<"Its not a leap year");
}
