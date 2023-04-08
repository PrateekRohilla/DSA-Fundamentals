#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	//code
	float a;
	int t,b;

	cin>>t;

	while(t--){
	    cin>>a>>b;
	    cout<<setprecision(b);
	    cout<<a<<endl;
	}
	return 0;
}
