#include<iostream>
using namespace std;

main(){
	
	int a[100][100];
	
	int m,n;
	cin>>m>>n;
	
	
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
			
	int sum[10] = {0};
	
	for(int j=0;j<n;j++)
		for(int i=0;i<m;i++)
			sum[j] += a[i][j];
			
	cout<<endl<<endl;		
	
	for(int j=0;j<n;j++)
		cout<<sum[j]<<"  ";
			 
			
}
