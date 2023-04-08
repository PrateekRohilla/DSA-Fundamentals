#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

main(){
	
	char s[] = "hello";
	
	int i=0;
	int j=strlen(s)-1;
	
	while(i<j)
		swap(s[i++],s[j--]);
	
	
	cout<<s;
}
