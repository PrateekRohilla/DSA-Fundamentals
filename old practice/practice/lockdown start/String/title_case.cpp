#include<iostream>
using namespace std;

main(){
	
	string str;
	getline(cin,str);
	
	str[0] = str[0] - 32;
	
	int i=1;
	while(str[i] != '\0'){
		
		if(str[i-1] == ' ')
			str[i] = str[i] - 32;
		i++;
	}
	
	cout<<str;
	
}
