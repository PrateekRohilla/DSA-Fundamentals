#include<iostream>
#include<queue>
using namespace std;

bool checkRotation(string str1,string str2){
	
	if(str1.size() != str2.size())
		return false;
		
	queue<char> q1;
	for(int i=0;i<str1.size();i++)
		q1.push(str1[i]);
		
	queue<char> q2;
	for(int i=0;i<str2.size();i++)
		q2.push(str2[i]);
		
	for(int i=0;i<str1.size();i++){
		
		char ch = q2.front();
		q2.pop();
		q2.push(ch);
		if(q1==q2)
			return true;
	}
	
	return false;
}

main(){
	
	string str1,str2;
	cin>>str1>>str2;
	
	cout<<checkRotation(str1,str2);
	
}
