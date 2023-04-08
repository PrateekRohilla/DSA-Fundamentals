#include <iostream>
using namespace std;

void printer(int n){
    if(n!=1)
        printer(n-1);
    cout<<n<<" ";
    
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    printer(n);
	    cout<<endl;
	}
	
	return 0;
}
