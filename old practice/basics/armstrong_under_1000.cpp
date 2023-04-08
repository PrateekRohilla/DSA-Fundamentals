#include<iostream>
using namespace std;
main(){

int n,i,sum,digit;

cout<<"Armstrong under 1 to 1000 are : "<<endl;

for(i=1;i<=1000;i++){
        sum=0;
        n=i;
        while(n>0){
            digit=n%10;
            sum+=digit*digit*digit;
            n/=10;
        }
        if(sum==i)
            cout<<i<<endl;
}

}
