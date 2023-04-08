#include<iostream>
main(){

using namespace std;

int year;

cout<<"Enter the year: ";
cin>>year;

if(year%100==0){
    if(year%400==0){
        cout<<"Hola !! ..Its a leap year";
    }
    else{
        cout<<"Not a leap year..";
    }

}
else{
    if(year%4==0){
        cout<<"Hola !! ..Its a leap year";
    }
    else{
        cout<<"Not a leap year..";
    }
}
}
