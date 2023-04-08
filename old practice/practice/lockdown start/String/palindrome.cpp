#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
		
		int l,flag=0;
		cin>>l;
		string str;
		cin>>str;
		
		int a=0,z=l-1;
		
		while(a<z){
			
			if(str[a] != str[z]){
				cout<<"No"<<endl;
				flag = 1;
				break;
			}
			a++;
			z--;
			
		}
		
		if(flag == 0)
			cout<<"Yes"<<endl;
	}
	
	return 0;
}
