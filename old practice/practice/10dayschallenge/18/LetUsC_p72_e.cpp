#include<iostream>
main(){

using namespace std;

float sal;

cout<<"Enter the salary: ";
cin>>sal;

sal>=25000 && sal<=40000 ? cout<<"manager" : (sal>=15000 && sal<25000 ? cout<<"Accountant" : cout<<"Clerk");
}
