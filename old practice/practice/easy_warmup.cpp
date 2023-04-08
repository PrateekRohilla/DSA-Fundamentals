/*#include<iostream>
using namespace std;
main(){
	
	cout<<"hello world";
	
}*/



//add two numbers
/*#include<iostream>
using namespace std;
main(){
	
	int a,b;
	
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<endl<<"sum is "<<a+b;
	
}*/



//calculate area of circle
/*#include<iostream>
const double pi = 3.14;
using namespace std;
main(){
	
	int r;
	float area;
	
	cout<<"Enter radius of the circle : ";
	cin>>r;
	area = pi*r*r;
	cout<<"Area of the circle is : "<<area;
	
}*/




#include<iostream>
#include<math.h>
using namespace std;



//swap - using third variable
main(){
	
	int a=10,b=20,c;
	
	cout<<"numbers before swap : "<<a<<b;
	
	c = b;
	b = a;
	a = c;
	
	cout<<endl<<"numbers after swap : "<<a<<b;
}



//swap - using + or -
main(){
	
	int a=10,b=20;
	
	cout<<"numbers before swap : "<<a<<" "<<b;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<endl<<"numbers after swap : "<<a<<" "<<b;
}

//swap - using * or /
{

	a = a*b;
	b = a/b;
	a = a/b;
}

//swap - using xor
{
	
	a = a^b;
	b = a^b;
	a = a^b;
}

//leap year
bool checkLeap(int y)
{
	return (y%400 == 0) || ((y%100 != 0) && (y%4 == 0));
}
main(){
	
	int year;
	
	cout<<"Enter year : ";
	cin>>year;
	
	checkLeap(year)?cout<<"Leap Year":cout<<"Not a Leap Year";
	
}



//print 10 nums
main(){
	
	for(int i=0;i<10;i++)
	cout<<i+1<<"  ";
	
}



//print 10 nums - reverse
main(){
	
	for(int i=10;i>0;i--)
	cout<<i<<"  ";
	
}




//odd numbers 
main(){
	for(int i=0;i<10;i=i+2)
		cout<<i<<" ";
}



//sum of N natural numbers
main(){
	
	int n;
	cout<<"Enter n : ";
	cin>>n;
	
	int sum = 0;
	
	for(int i=1;i<=n;i++)
	{
		cout<<i;
		if(i < n)
			cout<<" + ";
		sum = sum + i;
	}	
	cout<<endl<<sum;
}



// factorial 4! = 4*3*2*1  || 0! = 1
main(){
	
	
	int n;
	cin>>n;
	
	int fact = 1;
	
	for(int i=n;i>0;i--)
	{
		fact = fact*i;
	}
	
	cout<<endl<<fact;
}

//factorial recursive
int factorial(int n){
	
	if(n==0)
		return 1;
	
	return n * factorial(n-1);
	
}

//factorial - one line recursive
int factorial(int n){
	
	return (n==1 || n==0) ? 1 : n * factorial(n-1);
	
}

// sum of first N even natural numbers
main(){
	
	int count = 0,sum = 0,n;
	
	cin>>n;
	
	for(int i=0;i<n*2;i++){
		if(count%2==0)
		{
			cout<<" "<<count;
			sum +=count;
		}
		count++;
				
	}
	cout<<endl<<sum;
}



//x power y 
main(){
	
	//cout<<pow(2,3);
	
	int x,y;
	
	cin>>x>>y;
	
	int p=1;
	
	for(;y>0;y--)
		p *=x;
	
	cout<<endl<<p;
}



//count digits
main(){
	int n;
	cin>>n;
	
	int count=0;
	
	while(n){
		count++;
		n/=10;
	}
	
	cout<<count;
}



//sum of digits
main(){
	
	int n;
	cin>>n;
	
	int sum=0;
	
	while(n>0){
		sum += n % 10;
		n /= 10;
	}
	
	cout<<sum;
	
}



//reverse of number
main(){
	
	int n;
	cin>>n;
	
	int rev = 0;
	
	while(n>0){
		
		rev += n%10;
		n /= 10;
			
		if(n>0)
			rev *= 10;
	}
	
	cout<<rev;
	
}



//check armstrong
main(){
	
	int n;
	cin>>n;
	
	//find order - number of digits
	int order=0,n2=n;
	while(n2>0){
		order++;
		n2 /= 10;
	}
	
	//find sum of cubes
	int arm=0,n3=n,t;
	while(n3>0){
		t = n3%10;
		arm += pow(t,order);
		n3 /= 10;
	}
	
	(n == arm) ? cout<<"its armstrong" : cout<<"its not armstrong";
}




//lcm
main(){
	
	int a,b;
	cin>>a>>b;
	
	
	for(int i=(a>b?a:b);i<=a*b;i+=(a>b?a:b)){
		if((i%a==0) && (i%b==0)){
			cout<<"LCM is "<<i;
				break;
		}
	}
	
}




//hcf
main(){
	
	int a,b;
	cin>>a>>b;
	
	for(int i=(a<b?a:b);i>0;i--){
		if(a%i==0 && b%i==0)
		{
			cout<<"HCF is "<<i;
				break;
		}
	}
	
	
}



//prime numbers between two given numbers
main(){
	
	int a,b;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++)
	{
		int j=2;
		for(;j<i;j++){
			if(i%j==0)
				break;
		}
		
		if(j==i)
			cout<<i<<"  ";
	}
	
}



//fibonacci series
main(){
	
	cout<<"Fibonacci series upto : ";
	int n;
	cin>>n;
	
	int a,b,c;
	
	a = 0;
	b = 1;
	
	cout<<a<<"  "<<b<<"  ";
	
	for(int i=0;i<n-2;i++)
	{
		c = a + b;
		cout<<c<<"  ";
		a = b;
		b = c;
	}
	
}



// check co-prime number
main(){
	
	int a,b;
	cin>>a>>b;
	
	int i=(a<b?a:b);
	for(;i>1;i--){
		
		if(a%i==0 && b%i==0)
		{
			cout<<"Not co prime";
			break;
		}
		
	}
	
	if(i==1)
		cout<<"they are co prime";
	
}



//print N co-prime numbers
main(){
	
	int n;
	cin>>n;
	
	int i=2,j=3;
	
	while(n)
	{
		int k=(i<j?i:j);
		
		for(;k>1;k--){
	
		if(i%k==0 && j%k==0) 	
			break;
	
		}
		
		if(k==1)
		{
			cout<<i<<"  "<<j<<endl;
				n--;
		}
			
		i++;
	}
	
	
}



//ascii chart
main(){
	
	char a;
	
	cout<<"\t\tASCII Chart"<<endl<<endl;
	
	for(int i=1;i<266;i++)
	{
		a = i;
		cout<<a<<"\t";
	}
	
}



//binary to decimal
main(){
	
	int n;
	cin>>n;
	
	int f=0,t,dec=0;
	
	while(n){
		
		t = n%10;
		dec += t * pow(2,f);
		f++;
		n /= 10;
		
	}
	
	cout<<dec;
	
}



//star pattern 1
main(){
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}	
	
}



//star pattern 2
/*
	
	
	
	
	     *
	    **
	   ***
	  ****
	 *****
*/	 
main(){	 
	
	
	
	for(int i=0;i<6;i++)
	{
		for(int j=5;j>0;j--)
		{
			if(i>=j)
				cout<<"*";
			else
				cout<<" ";
		}	
		
		cout<<endl;
		
	}
	
	
}



//star pattern 3
/*

*****
 ****
  ***
   **
    *
    
*/
main(){
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i>j)
			 cout<<" ";
			else
			 cout<<"*";
		}
		
		cout<<endl;
	}
	
	
	
}



//star pattern 4
/*

*****
****
***
**
*

*/
main(){
	
	for(int i=0;i<5;i++)
	{
		for(int j=5;j>0;j--)
		{
			if(j<=i)
			 cout<<" ";
			else 
			 cout<<"*";
		}
		
		cout<<endl;
	}
	
	
}



/*

1
12
123
1234
12345

*/
main(){
	
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		
		cout<<endl;
	}
	
}



/*



*/
