#include<iostream>
using namespace std;
main(){

int k;

for(int i=1;i<=7;i++){
        k=0;
    for(int j=1;j<=7;j++){
        //if(i>=4)
        i<4?k++:k--;
        if(j<=k)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
}

}
