#include<iostream>
using namespace std;

int triangle(int);
int fact(int);

main(){

int n;

cout<<"Enter the number of rows for Pascal Triangle : ";
cin>>n;
cout<<endl<<endl;

triangle(n);

cout<<endl<<endl<<endl;
}

int triangle(int num){

    int nCr,n,r,i,j,k=1;

    for(i=1;i<=num;i++){
            r=0;
            n=i-1;
        for(j=1;j<=(num+4);j++){

            if((j>=6-i && j<=4+i) && k==1){

                k=0;

                nCr=fact(n)/((fact(n-r)*fact(r)));

                cout<<nCr;

                r++;
            }
            else{
                k=1;
                cout<<" ";
            }
        }
        cout<<endl;
    }

}


int fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}
