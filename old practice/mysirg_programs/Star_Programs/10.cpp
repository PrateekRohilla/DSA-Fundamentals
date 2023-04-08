#include<iostream>
main(){

using namespace std;

int i,j;

for(i=1;i<=7;i++){
    for(j=1;j<=7;j++){
        if(i<5){
            if(j>=5-i && j<=3+i)
                cout<<"*";
            else
                cout<<" ";
        }
        else{
            if(j>=i-3 && j)
                cout<<"*";
            else
                cout<<" ";
        }

        }
        cout<<endl;
    }

}
