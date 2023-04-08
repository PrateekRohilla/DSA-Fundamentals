#include<iostream>
#include<string.h>
using namespace std;
main(){

string name;
int count;
int totalchar;
cout<<"Enter the name: ";
getline(cin,name);

cout<<endl<<endl<<endl;
totalchar=strlen(name);
for(int i=0;i<;i++){
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
        count++;
    }
}

cout<<"hola!!...  there are "<<count<<" in the string";
}
