#include<iostream>
using namespace std;

main(){
	
	int a[100][100];
	
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	
	cout<<endl<<endl;
	
	int flag = 1;
	
	for(int j=0;j<m;j++){
		
		if(flag){
			for(int i=0;i<n;i++)
				cout<<a[i][j]<<"  ";
				
				flag = 0;
		}
		
		else{
			for(int i=n-1;i>-1;i--)
				cout<<a[i][j]<<"  ";
				
				flag = 1;
		}
		
	}
	
	
}
