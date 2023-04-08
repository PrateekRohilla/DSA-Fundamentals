#include<iostream>
using namespace std;
main(){

char n;
int count,seter=5;

for(int i=1;i<=4;i++){
        n=65;
        count=0;
        seter--;
    for(int j=1;j<=7;j++){
        if(j<=5-i || j>=3+i){
            cout<<n;
            count++;
            if(count<seter)
                n++;
            else
                n--;
        }
        else{
            cout<<" ";
            //if(seter==4)
              //n--;
        }

    }
    cout<<endl;
}


}
