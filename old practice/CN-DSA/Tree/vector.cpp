#include<iostream>
#include<vector>
using namespace std;

main(){
	
	//dynamic
	//vector<int> *vp = new vector<int>();
	
	//static
	vector<int> v;
	
	//insert element at last
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	v[1] = 100;
	
	//instead of this use v.at()
	cout<<v[1]<<endl;
	
	cout<<v.at(1)<<endl;
	
	cout<<"size : "<<v.size()<<endl;
	
	v.push_back(200);
	v.push_back(300);
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
		
	
	//delete last element
	v.pop_back();
	
	//total size of vector
	cout<<endl<<v.capacity();
	
}
