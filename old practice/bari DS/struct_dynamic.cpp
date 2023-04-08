#include<iostream>
using namespace std;

struct test{
	int a;
	int b;
};

main(){
	
	struct test *p;
	
	p=new test;
	
	p->a=10;
	p->b=20;
	
	cout<<endl<<p->a;
	cout<<endl<<p->b;
}
