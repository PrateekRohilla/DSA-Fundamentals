#include<iostream>
main(){

using namespace std;

int hard,tensile;
float carbon;

cout<<"Enter the value of hardness, carbon content & tensile strength respectively: ";
cin>>hard>>carbon>>tensile;

if(hard>50 && carbon<0.7 && tensile>5600){
    cout<<"Grade 10";
}
else if(hard>50 && carbon<0.7){
    cout<<"Grade 9";
}
else if(carbon<0.7 && tensile>5600){
    cout<<"Grade 8";
}
else if(hard>50 && tensile>5600){
    cout<<"Grade 7";
}
else if(hard>50 || carbon<0.7 || tensile>5600){
    cout<<"Grade 6";
}
else{
    cout<<"Grade 5";
}
}
