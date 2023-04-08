#include<iostream>
using namespace std;
main(){

int bit=1;

for(int i=1;i<=5;i++){
    for(int j=1;j<=9;j++){
        if(j>=6-i && j<=4+i && bit){
            cout<<"*";
            bit=0;
        }
        else{
            cout<<" ";
            bit=1;
        }
    }
    cout<<endl;
}

}
