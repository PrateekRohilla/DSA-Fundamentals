#include<iostream>
#include<cmath>
using namespace std;

void zeropow();
float negtivepow(int ,int);
int positivepow(int ,int);
main(){

int x,y;

cout<<"Enter the value of x and y : ";
cin>>x>>y;

if(y==0){
    zeropow();
}

if(y<0){
    float res=negtivepow(x,y);
    cout<<endl<<endl<<x<<" raise to power "<<y<<" is "<<res;
}

if(y>1){
    int res=positivepow(x,y);
    cout<<endl<<endl<<x<<" raise to power "<<y<<" is "<<res;
}


}



void zeropow(){
    cout<<endl<<endl<<" 0 ";
}

float negtivepow(int x,int y){
    float n=pow(x,y);
    return n;
}

int positivepow(int x,int y){
    int n=pow(x,y);
    return n;
}
