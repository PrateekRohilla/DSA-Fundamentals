#include<iostream>
using namespace std;

main(){
	
	int a[100][100];
	
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
			
	int row_index,col_index,row_large,col_large;
	
	row_large = col_large = INT_MIN;
	
	int Rsum[10] = {0};
	int Csum[10] = {0};
	
	
	//storing sum of all rows/cols
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			Rsum[i] += a[i][j];
			
	for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
			Csum[j] += a[i][j];
	
			
	
	//finding largest
	for(int i=0;i<n;i++){
		
		if(Rsum[i] > row_large){
			row_index = i;
			row_large = Rsum[i];
		}
	}
	
	for(int i=0;i<n;i++){
		
		if(Csum[i] > col_large){
			col_index = i;
			col_large = Csum[i];
		}	
	}
	
	
	cout<<endl<<endl;
	
	
	if(row_large >= col_large)
		cout<<"row  "<<row_index<<"  "<<row_large;
	
	else
		cout<<"col  "<<col_index<<"  "<<col_large;
	
	
	
}
