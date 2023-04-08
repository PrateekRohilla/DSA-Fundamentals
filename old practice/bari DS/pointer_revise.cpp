#include<iostream>
using namespace std;
main(){
	
	cout<<"revision of pointers : "<<endl<<endl;
	
	int a=10;
	int *p;
	p=&a;
	
	
	cout<<"value of a "<<a;
	cout<<endl;
	cout<<endl;
	cout<<"address of a: "<<&a;
	cout<<endl;
	cout<<endl;
	cout<<"address of a by pointer p : "<<p;
	cout<<endl;
	cout<<endl;
	cout<<"now address of pointer p :"<<&p;
	cout<<endl;
	cout<<endl;
	cout<<"value of a by pointer p : "<<*p;
	cout<<endl;
	cout<<endl;
	
}
