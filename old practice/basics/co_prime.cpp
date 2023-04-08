#include<iostream>
using namespace std;
main(){

int a,b;

cout<<"Enter two numbers : ";
cin>>a>>b;
int i;
for(i=(a<b?a:b);i>1;i--){
    if(a%i==0 && b%i==0){
        cout<<endl<<"They are not co-prime..";
        break;
    }
}
if(i==1)
    cout<<endl<<"They are co-prime..";


}
