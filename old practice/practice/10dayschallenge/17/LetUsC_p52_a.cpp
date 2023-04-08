#include<iostream>
main(){

using namespace std;

float cs,sp,profit,loss;

cout<<"Enter the Cost Price of the item: ";
cin>>cs;
cout<<endl<<"Enter the Selling Price of the item: ";
cin>>sp;

if(sp>cs){
    cout<<endl<<"Profit Gained";
    cout<<endl<<"Total profit gained is "<<sp-cs;
}
else{
    cout<<endl<<"loss incurred";
    cout<<endl<<"Total loss incurred is "<<cs-sp;
}
}
