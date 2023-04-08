#include<iostream>
using namespace std;

struct rect{
	int l;
	int b;
};

main(){
	
	struct rect r = {10,5};
	
	//pointer to structure
	struct rect *p=&r;
	
	//accessing data members by pointer -->
	
	
	//1st method
	cout<<p->b;
	
	
	//2nd method
	cout<<endl<<(*p).b;
	
}
