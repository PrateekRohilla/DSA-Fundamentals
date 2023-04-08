#include<iostream>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
			return false;
	}
	
	return true;
}

void primeSum(int n)
{
	int a=2,b=n-2;
	
	while(a<=b)
	{
		bool one = isPrime(a);
		bool two;
	
		if(one)
		{
			two = isPrime(b);
			if(two)
			{
				cout<<a<<" + "<<b<<endl;
			}
		}
	
		a++;
		b--;
	}
	
}

main(){
	
	int n;
	cin>>n;
	//cout<<isPrime(n);
	primeSum(n);
	
}
