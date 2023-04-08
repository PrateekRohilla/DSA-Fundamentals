#include <iostream>
using namespace std;

bool jumping(int num){
	
	int firstdig = num%10, seconddig=0;
	num/=10;
	
	while(num>0){
		
		seconddig = num%10;
		num/=10;
		
		if(!(firstdig+1 == seconddig || firstdig-1 == seconddig))
			return false;
		
		firstdig = seconddig;
	}
	
	return true;
}

int main() {
	
	int t;
    cin>>t;
    
    while(t--){
        
		long long n;
        cin>>n;
        
        long long sorted[100000] = {-1};
        
        long long index = 0;
        
        for(long long i=0;i<=n;i++){
			if(jumping(i))
			{
				sorted[index] = i;
				index++;
			}
		}
        
		for(long long f=0;f<index;f++)
		{
			if(sorted[f] == -1)
				continue;
				
			cout<<sorted[f]<<" ";
		}
	
	    cout<<endl;
    }
	
	return 0;

}
