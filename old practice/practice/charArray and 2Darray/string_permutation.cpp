#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char s1[100];
	char s2[100];
	
	cin>>s1>>s2;
	
	int n = strlen(s1);
	
	int m = strlen(s2);
	
	if(n != m){
		cout<<"false";
		return 0;
	}
	
	
	int freq[256] = {0};
	
	for(int i=0;i<n;i++)
		freq[s1[i]] += 1;
		
	for(int i=0;i<n;i++)
		freq[s2[i]] -= 1;
		
	
	for(int i=0;i<256;i++){
		if(freq[i] != 0){
			cout<<"false";
			return 0;
		}
	}
	
	cout<<"true";
}
