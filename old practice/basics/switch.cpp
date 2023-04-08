#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    switch(n){
	        case 1 .. 10: cout<<"one";
	                    break;
            default: cout<<"not in range";
	    }

	}
	return 0;
}
