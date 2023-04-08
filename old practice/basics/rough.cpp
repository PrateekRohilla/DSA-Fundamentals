#include<iostream>
using namespace std;
main(){
int dir=1;
int n;

for(int i=(dir==1)?(n-1):1 ; i>=(dir==1)?1:n ; (dir==1)?i--:i++)
    cout<<i;
}
