#include<iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    
	    string result = "";
	    
	    for(int i=0;i<s1.length() || i<s2.length();i++)
		{
	        if(i < s1.length())
	        	result += s1[i];
			
			if(i < s2.length())
	        	result[i] += s2[i];
			
	    }
	    
	    cout<<result<<endl;
	}
	
	return 0;
}
