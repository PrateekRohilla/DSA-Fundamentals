#include<iostream>
#include<cstring>
using namespace std;

void swap(int *a,int *b){
	
	int t = *a;
	*a = *b;
	*b = t;
	
}

void reverse(char str[]){
	
	int n = strlen(str);
	
	for(int i=0;i<n;i++){
		
		swap(str[i],str[n-1]);	
		n--;
		
	}
	
}

void reverseWord(char str[]){
	
	int n = strlen(str);
	
	int k;
	int j = 0;
	for(int i=0;i<n;i++){
		
		if(str[i] == ' '){
			
			k = j;
			j = i-1;
			while(k<j){
				
				swap(str[k],str[j]);
				k++;
				j--;
			}	
			
			j = i + 1;
			
		}
		
	}
	
}

main(){
	
	char str[100] = "this is hello world";
	
	reverse(str);
	
	reverseWord(str);
	
	cout<<str;
	
}
