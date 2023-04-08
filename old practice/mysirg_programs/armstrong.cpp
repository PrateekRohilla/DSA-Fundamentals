#include<iostream>
#include<cmath>
main(){

using namespace std;

int i,n,rem;
float sum;

cout<<"Armstrong number from 1 to 1000 are: "<<endl;

for(i=1;i<=1000;i++){
    sum=0;
    n=i;
    while(n!=0){
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(sum==i)
        cout<<i<<endl;
}

}
