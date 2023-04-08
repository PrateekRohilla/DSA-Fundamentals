#include<iostream>
using namespace std;
/*main(){
	
	int a[10];
	
	for(int i=0;i<10;i++)
		cin>>a[i];
		
	int odd = 0, even = 0;
	
	for(int i=0;i<10;i++){
		
		if(a[i]%2==0)
			even += a[i];
		else
			odd += a[i];
		
	}
	
	cout<<"even : "<<even<<"   "<<"odd : "<<odd;
	
}*/



/*main(){
	
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
		
	int great = a[0];
	
	for(int i=1;i<10;i++){
		if(a[i]>great)
			great = a[i];
	}
	
	cout<<great;
	
}*/



/*main(){
	
	//can initialize like this
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	//or like this
	int b[3][3] = {1,1,1,1,1,1,1,1,1};
	
	int c[3][3] = {0};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			c[i][j] = a[i][j]+b[i][j];
	}
	
	cout<<"Matrix A : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		
		cout<<endl;
	}
	
	cout<<"Matrix B : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<b[i][j]<<" ";
		
		cout<<endl;
	}
	
	cout<<"Matrix C [Addition] : "<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c[i][j]<<" ";
		
		cout<<endl;
	}
		
}*/


//matrix multiplication
main(){
	
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int b[3][3] = {1,2,3,4,5,6,7,8,9};
	int c[3][3];
	
	
	int sum=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum = 0;
			
			for(int k=0;k<3;k++)
				sum += a[i][k]*b[k][j];
				
			c[i][j] = sum;
			
		}
	}
	
	
	
	cout<<"Matrix A : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	cout<<"Matrix B : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<b[i][j]<<" ";
		
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	cout<<"Multiplication matrix : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c[i][j]<<" ";
		
		cout<<endl;
	}
	
}
