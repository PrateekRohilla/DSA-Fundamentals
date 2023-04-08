//converting RGB to CYMK
#include<iostream>
main(){

using namespace std;

float red,green,blue,m,cyan,magenta,white,black,yellow;

cout<<"Enter the values of R G B respectively: ";
cin>>red>>green>>blue;

red=red/255;
green=green/255;
blue=blue/255;

m=red;
if(green>m)
    m=green;
if(blue>m)
    m=blue;

white=m;

if(red==0 && green==0 && blue==0){
    cyan=magenta=yellow=0;
    black=1;
}
else{
    cyan=(white-red)/white;
    magenta=(white-green)/white;
    yellow=(white-blue)/white;
    black=1-white;
}

cout<<"Value of C M Y K are  "<<"\t"<<cyan<<"\t"<<magenta<<"\t"<<yellow<<"\t"<<black;
}
