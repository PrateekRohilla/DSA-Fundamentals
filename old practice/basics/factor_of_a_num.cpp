#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the number : ";
cin>>n;

cout<<endl<<"Factors of "<<n<<" are : "<<endl;

{

    int temp=1;

    while(temp<=n){
        if(n%temp==0)
            cout<<temp<<endl;

        temp++;
    }


}
}
