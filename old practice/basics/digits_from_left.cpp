#include<iostream>
using namespace std;
main(){

int num,count=0,multiply=1;
int n,a,b;
cout<<"Enter the number : ";
cin>>num;

cout<<endl<<"separating the digits : ";
n=num;
while(n>0){
    count++;
    n/=10;
}

for(int i=1;i<count;i++){
    multiply*=10;
}
while(count){
    a=num/multiply;
    b=a%10;
    cout<<endl<<b;
    multiply/=10;
    count--;
}

}
