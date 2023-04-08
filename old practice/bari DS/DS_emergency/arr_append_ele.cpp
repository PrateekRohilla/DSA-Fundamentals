#include<iostream>
using namespace std;
main(){
	
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	int a[n];
	cout<<"Enter array elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"well done \nyour array elements : \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";;
		
	char check;
	do{
		int to_app;
		cout<<endl<<"Enter the element you want to append : ";
		cin>>to_app;
		a[n]=to_app;
		
		
		cout<<endl<<"elements after append operation : ";
		for(int i=0;i<=n;i++)
			cout<<a[i]<<" ";
		
		n++;
		
		cout<<endl<<"Do you want to append one more element Y//N : ";
		cin>>check;
	 	
				
	}while(check == 'y');
		

}
