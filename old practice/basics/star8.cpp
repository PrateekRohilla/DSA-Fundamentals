#include<iostream>
using namespace std;
main(){

int p,count;

for(int i=1;i<=4;i++){
        p=1,count=0;
    for(int j=1;j<=7;j++){
        if(j>=5-i && j<=3+i){

            cout<<p;
            count++;
            if(count<i){
                p++;
            }
            else{
                p--;
            }
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

}
