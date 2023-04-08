#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
	
	int lcm = a*b;
	
	for(int i = (a>b?a:b); i<a*b;i++){
		if(i%a == 0 && i%b == 0){
			lcm = i;
			return lcm;
		}
	}
	
}

void addFraction(int num1, int den1, int num2,int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

void addFraction(int num1, int den1, int num2,int den2)
{
    int numx,denx;
    
    if(den1 == den2){
        
        numx = num1+num2;
        denx = den1;
        
        for(int i=numx;i>=2;i--)
        {
            if(numx%i == 0 && denx%i == 0){
                numx/=i;
                denx/=i;
            }
        }
        
        cout<<numx<<"/"<<denx<<endl;
        return;
    }
    
 	denx = lcm(den1,den2);
 	
 	int t1 = denx/den1;
 	int t2 = denx/den2;
 	
 	int z1 = t1*num1;
 	int z2 = t2*num2;
 	
 	numx = z1+z2;
 	
 	for(int i=numx;i>=2;i--)
    {
        if(numx%i == 0 && denx%i == 0){
            numx/=i;
            denx/=i;
        }
    }
    
        cout<<numx<<"/"<<denx<<endl;
        return;
}
