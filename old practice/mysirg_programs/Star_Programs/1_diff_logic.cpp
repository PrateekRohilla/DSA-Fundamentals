#include<iostream>
main(){

using namespace std;

int i,j;

for(i=0;i<=5;i++){
    for(j=1;j<=5;j++){
        if(j<=i)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
}

}
