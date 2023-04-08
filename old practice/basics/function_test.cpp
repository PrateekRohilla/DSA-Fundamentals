#include<iostream>
using namespace std;

int display(int);

main(){

cout<<"calling the function...";

cout<<endl<<"now passing a value and returning the same..";
int n=5;
display(n);

}

display(int t){

cout<<endl<<"Hello world function.."<<endl;

cout<<t;

return 0;
}
