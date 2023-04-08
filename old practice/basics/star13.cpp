#include<iostream>
using namespace std;
main(){

int k,n=1,set=0;

for(int i=1;i<=4;i++){
        k=i;
    for(int j=1;j<=7;j++){
        if(j>=5-i && j<=3+i)
        {
            cout<<k;
        }
        else
            cout<<" ";

    }
    cout<<endl;
    n+=2;
}


}
