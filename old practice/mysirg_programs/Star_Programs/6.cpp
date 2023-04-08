#include<iostream>
main(){

using namespace std;

int i,j,k=1;

for(i=1;i<=5;i++){
    for(j=1;j<=9;j++){
        if(j>=6-i && j<=4+i && k){
            cout<<"*";
            k=0;
        }
        else{
            cout<<" ";
            k=1;
        }
    }
    cout<<endl;
}

}
