 #include<iostream>
 using namespace std;
 
 main(){
 	
 	int n;
 	cin>>n;
 	int i;
 	for(i=2;i<n;i++){
 		if(n%i == 0)
 			break;
	}
	
	if(i<n)
		cout<<"Not prime";
	else
		cout<<"prime!!";
	
 }
