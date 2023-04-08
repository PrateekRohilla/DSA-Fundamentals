//print all prime factors of a number
//eg prime factors of 36 are 2 2 3 3
#include<iostream>
main(){

using namespace std;

int n,i;

cout<<"Enter the number: ";
cin>>n;

cout<<endl<<endl<<"All Prime factors of "<<n<<" are: ";

for(i=2;n>1;i++){
    while(n%i==0){
        cout<<"\t"<<i;
        n=n/i;
    }
}


cout<<endl<<endl;
}
