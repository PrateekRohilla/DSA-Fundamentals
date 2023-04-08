#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int t;
	
	t=*a;
	*a=*b;
	*b=t;
}

main(){
	
	cout<<"swap by value : ";
	int x,y;
	
	cin>>x>>y;
	
	cout<<endl<<"x & y before swap :"<<x<<"    "<<y;
	swap(&x,&y);
	cout<<endl<<endl<<endl<<"x & y after swap :"<<x<<"    "<<y;
	
	
}
