#include<iostream>
using namespace std;

main(){
	
	char s[100],t;
	gets(s);
	
	//find length of str
	int l;
	for(l=0;s[l];l++);
	
	//reversing
	for(int i=0;i<l/2;i++)
	{
		t = s[i];
		s[i] = s[l-1-i];
		s[l-1-i] = t;
	}
	
	cout<<s;
}
