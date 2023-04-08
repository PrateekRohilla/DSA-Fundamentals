#include<iostream>
using namespace std;

struct arrstruct{
	int roll;
};

main(){
	
	struct arrstruct students[10];
	
	for(int i=0;i<=9;i++)
		students[i].roll=i+1;
		
	for(int i=0;i<=9;i++)
		cout<<i+1<<".  roll no : "<<students[i].roll<<endl;
	
};

