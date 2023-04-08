#include<iostream>
using namespace std;
main(){

string str;

//for(int i=0;i<10;i++)
  //cin>>str[i];

getline(cin,str);

int i=0;

while(str[i]!='\0'){
    cout<<str[i]<<endl;
    i++;
}

cout<<"length : "<<i;
}
