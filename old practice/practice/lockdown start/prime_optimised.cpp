//check prime or not - optimised
//running loop till sqrt(n)
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    int flag = 0;
	    long long i;
	    for(i = 2;i*i<=n;i++){
	        if(n%i == 0)
	        {
	            cout<<"No";
	            flag = 1;
	            break;
	        }
	    }
	    
	    if(flag == 0)
	    cout<<"Yes";
	    
	    cout<<endl;
	}
	
	return 0;
}
