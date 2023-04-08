#include<iostream>
#define pi 3.14
using namespace std;

float area(int r)
{
	return pi*r*r;
}

main()
{
	int r;
	cin>>r;
	cout<<"area is "<<area(r);
}
