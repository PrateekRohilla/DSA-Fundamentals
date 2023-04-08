//armstrong 1 to 1000
#include<iostream>
#include<cmath>
main(){

using namespace std;

int copy_number,count_digit=0,n,i,rem;
float sum;

cout<<"Printing Armstrong number between 1 to 1000 ......."<<endl;

for(i=1;i<=1000;i++){

    sum=0;
    copy_number=n=i;

    while(copy_number!=0){
        copy_number/=10;
        count_digit++;
    }

    while(n!=0){
        rem=n%10;
        sum+=pow(rem,count_digit);
        n=n/10;
    }
    if(sum==i)
        cout<<i<<endl;
}

}
