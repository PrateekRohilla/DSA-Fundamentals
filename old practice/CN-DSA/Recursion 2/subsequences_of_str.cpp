#include<iostream>
using namespace std;

int subsequences(string input,string output[]){
	
	if(input.empty()){
		output[0] = "";
		return 1;
	}
	
	string smallString = input.substr(1);
	int smalloutputsize = subsequences(smallString,output);
	for(int i=0;i<smalloutputsize;i++)
		output[i+smalloutputsize] = input[0] + output[i];
	
	return 2*smalloutputsize;
	
}

main(){
	
	string input;
	getline(cin,input);
	
	string* output = new string[1000];
	
	int count = subsequences(input,output);
	
	for(int i=0;i<count;i++)
		cout<<output[i]<<endl;
	
	
}
