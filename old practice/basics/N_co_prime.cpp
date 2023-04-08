#include<iostream>
using namespace std;
main(){

int i,n;

cout<<"Enter the value of n : ";
cin>>n;
int flag=0;
int a=2,b=2;
for(int k=1;k<=n;k++){
     a++;
        //(flag==0)?a++:b++;
        //if(flag==0)
          //  flag=1;
        //else
          //  flag=0;
    for(i=(a<b?a:b);i>1;i--){
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==1)
        cout<<a<<" "<<b<<endl;

}
}
