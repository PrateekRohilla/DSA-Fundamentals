#include<iostream>
using namespace std;
main(){

char k;

for(int i=1;i<=4;i++){
        k=65;
    for(int j=1;j<=7;j++){
        if(j<=5-i || j>=3+i){
            cout<<k;
            k++;
            if(j<4){
                k--;
            }
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

}
