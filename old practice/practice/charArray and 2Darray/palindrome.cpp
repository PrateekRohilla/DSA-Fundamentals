#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char arr[]){
	
	int l = strlen(arr);
	
	int i = 0,j = l-1;
	while(i<j){
		
		if(arr[i] != arr[j])
			return false;
		i++; j--;
	}
	
	return true;
}

main(){
	
	char arr[100];
	cout<<"Enter string : ";
	cin>>arr;
	
	cout<<endl;
	int result = palindrome(arr);
	if(result)
		cout<<"true";
	else
		cout<<"false";
	
}
