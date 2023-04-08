//LetUsC page19 a
//calculate ramesh gross salary
//he gets 40% DA & 20% HRA with salary. So we have to calculate gross salary
#include<iostream>
main(){

using namespace std;

float sal;

cout<<"Enter the ramesh salary ";
cin>>sal;
float hra=0.40*sal;
float da=0.20*sal;
cout<<"Ramesh's gross salary is "<<sal+hra+da;
}
