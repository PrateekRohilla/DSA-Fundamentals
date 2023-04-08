#include<iostream>
main(){

using namespace std;

int i,j;
char a;

for(i=1;i<=4;i++){
        a=65;
    for(j=1;j<=7;j++){

        if(j<=5-i || j>=3+i){
            cout<<a;

        }
        else
            cout<<" ";

    if(j<4)
                a++;
            else
                a--;
    }
    cout<<endl;
}

}
