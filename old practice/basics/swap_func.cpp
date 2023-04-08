#include<iostream>
using namespace std;

int callbyvalue(int ,int);
int callbyaddress(int *,int *);
int callbyreference(int &,int &);

main(){

int a,b;

cout<<"Enter the value of a & b : ";
cin>>a>>b;

cout<<endl<<"values before swapping : "<<a<<" "<<b;

callbyvalue(a,b);
cout<<endl<<endl<<"values after callbyvalue swapping : "<<a<<" "<<b;
callbyaddress(&a,&b);
cout<<endl<<endl<<"values after callbyaddress swapping : "<<a<<" "<<b;
callbyreference(a,b);
cout<<endl<<endl<<"values after callbyreference swapping : "<<a<<" "<<b<<endl<<endl<<endl;

}

int callbyvalue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    return 0;
}
int callbyaddress(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int callbyreference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
