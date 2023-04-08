#include<bits/stdc++.h>
using namespace std;
main(){

int a[10],t;

srand(0);

for(int i=1;i<=10;i++){
    t=rand()%10;
    for(int j=0;j<i;j++)
        if(a[j]==t)
            i--;
    a[i]=t;

}
for(int i=1;i<=10;i++){
    cout<<a[i];
    cout<<endl;

}
}
