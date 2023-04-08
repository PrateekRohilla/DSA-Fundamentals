//pythagorean triplet
//geeksforgeeks
//improved logic

#include<iostream>
main(){

using namespace std;

int a,b,c=0,m=2,limit;

cout<<"Enter the limit: ";
cin>>limit;
cout<<endl<<"Pythagorean triplets below "<<limit<<" are "<<endl<<endl;

while(c<limit){

    for(int n=1;n<m;++n){

        a=m*m-n*n;
        b=2*m*n;
        c=m*m+n*n;

        if(c>limit)
            break;

        cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
    m++;
}

}
