#include<iostream>
using namespace std;

main(){
	
	string str;
	cin>>str;
	
	int arr[256] = {0};
	
	int i=0;
	while(str[i] != '\0'){
		arr[str[i]]++;
		i++;
	}
	
	//for(int k=0;k<256;k++)
	//	cout<<k<<".    "<<alpha[k]<<endl;
	
	int z = 255;
	int f=0;
	while(z > -1)
	{
		if(arr[z] != 0)
		{
			str[f] = arr[z];
			arr[z]--;
			f++;
		}
		
		if(arr[z] == 0)
			z--;
	}
	
	cout<<str;

}
