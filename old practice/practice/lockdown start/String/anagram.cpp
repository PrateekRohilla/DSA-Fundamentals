// anagram for a-z only
#include<iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	string s1,s2;
	cin>>s1>>s2;
	
	long long int l1,l2;
	l1 = s1.length();
	l2 = s2.length();
	
    if(l1 != l2)
	{
		cout<<"NO"<<endl;
		break;
	}
	
	long long int anag[26] = {0};
	
	for(long long int i=0;i<l1;i++)
	{
		anag[s1[i]-'a']++;
	}
	
	for(long long int i=0;i<l2;i++)
	{
		anag[s2[i]-'a']--;
	}
	
	long long int i;
	for(i=0;i<26;i++)
	{
		if(anag[i] != 0)
		{
			cout<<"NO"<<endl;
			break;
		}
	}
	if(i == 26)
	cout<<"YES"<<endl;
	    
	}
	
	return 0;
}
