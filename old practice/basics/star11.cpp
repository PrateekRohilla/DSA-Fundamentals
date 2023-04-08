#include<iostream>
using namespace std;
main(){
int k;
for(int i=1;i<=7;i++){
        i<=4?k=i:k--;
    for(int j=1;j<=4;j++){
        if(j<=k)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;

}

}
