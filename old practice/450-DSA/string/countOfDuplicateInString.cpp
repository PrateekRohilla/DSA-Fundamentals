#include<iostream>
#include<map>
using namespace std;

main(){
	
	string s = "geeksforgeeks";
	
	/*
	// brute force approach - O(n*n)
	for(int i=0;i<s.length();i++){
		
		if(s[i] == '0')
			continue;
		
		int k=1;
		
		for(int j=i+1;j<s.length();j++){
			
			if(s[j] == '0')
				continue;
				
			if(s[i]==s[j]){
				k++;
				s[j] = '0';
			}
		}
		
		if(k>1)
			cout<<s[i]<<" "<<k<<endl;
	
	}
	*/
	
	//using map
	map<char,int> m;
	
	for(int i=0;i<s.length();i++)
		m[s[i]]++;
		
	for(auto it:m){
		
		if(it.second > 1)
			cout<<it.first<<" "<<it.second<<endl;
		
	}
	
}
