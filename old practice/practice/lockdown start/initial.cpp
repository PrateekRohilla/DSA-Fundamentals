//hello world
/*
#include<iostream>
using namespace std;
main(){
	cout<<"hello world";
}
*/


//swap two nums
/*
#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter two numbers for swapping: ";
	cin>>a>>b;
	cout<<endl;
	cout<<"before swap : "<<a<<b;
	cout<<endl;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<endl;
	cout<<"after swap : "<<a<<b;
	cout<<endl;
}
*/



//check even or odd
/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number to check even or odd : ";
	cin>>n;
	
	cout<<endl;
	
	if(n%2 == 0)
		cout<<"even";
	else
		cout<<"odd";
		
	cout<<endl;
}
*/



//greater between two numbers
/*
#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
	
	cout<<endl;
	
	cout<<"greater is "<<(a>b?a:b);
}
*/



//greater among three numbers
/*
#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	
	cout<<endl;
	
	int k = (a>b) ? (a>c?a:c) : (b>c?b:c);
	
	cout<<"greater is "<<k;
	
	cout<<endl;
}
*/



//leap year
/*
#include<iostream>
using namespace std;
main(){
	int year;
	cout<<"Enter the year : ";
	cin>>year;
	
	cout<<endl;
	
	if(year%400 == 0)
		cout<<"leap year";
	else if(year%100 == 0)
		cout<<"not a leap year";
	else if(year%4 == 0)
		cout<<"leap year";
	else
		cout<<"not a leap year";
		
	
	//in one line
	//(((year%4==0) && (year%100!=0)) || (year%400==0));
	
}
*/



//loop start
/*
#include<iostream>
using namespace std;
main(){
	for(int i=0;i<5;i++)
	cout<<i<<".  prateek\n";
}
*/



//10 natural nums in revs
/*
#include<iostream>
using namespace std;
main(){
	for(int i=10;i>0;i--)
		cout<<i<<endl;
}
*/



//first 10 even natural nums
/*
#include<iostream>
using namespace std;
main(){
	for(int i=1;i<20;i++)
	{
		if(i%2==0)
			cout<<i<<endl;
	}
}
*/



//sum of first n odd natural nums
/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"how many nums : ";
	cin>>n;
	n*=2;
	int sum=0;
	int i=1;
	while(n>0){
		if(i%2 != 0)
			sum+=i;
		i++;
		n--;
	}
	
	cout<<endl<<sum;
}
*/





//factorial

//recursive solution
/*
int factorial(int n){
	if(n==0)
		return 1;
	return n * factorial(n-1);
}
*/

//single line solution - ternary operator
/*
int factorial(int n){
	return  (n==1 || n==0) ? 1 : n * factorial(n-1);
}
*/

/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<endl;
	
	int fact=1;
	
	//while loop solution
	
	int cal=n;
	while(n--){
		fact *= cal;
		cal--;
 	}
	
	
	//recursive call
	//fact = factorial(n);
	
	
	cout<<"Factorial is : "<<fact;
}
*/





// x power y with function
/*
#include<iostream>
#include<math.h>
using namespace std;
main(){
	cout<<"3 raise to the power of 4 is "<<pow(3,4);
}
*/


// x power y without function
/*
#include<iostream>
using namespace std;
main(){
	int x=3,y=4;
	int pow=1;
	for(;y>0;y--)
		pow*=x;	
	cout<<"3 raise to the power of 4 is "<<pow;
}
*/




//count digits
/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<endl;
	
	int count=0;
	
	while(n){
		count++;
		n=n/10;
	}
	
	cout<<count<<" digits";
}
*/



//sum of digits
/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<endl;
	
	int sum=0;
	
	while(n){
		sum+=n%10;
		n=n/10;
	}
	
	cout<<"sum is digits are "<<sum;
}
*/



//reverse a number
/*
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<endl;
	
	int lastdig;
	int rev=0;
	
	while(n){
		lastdig=n%10;
		rev=(rev*10)+lastdig;
		n/=10;
	}
	
	cout<<"reverse is "<<rev;
}
*/





