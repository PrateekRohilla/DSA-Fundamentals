#include<iostream>
#include<string.h>
using namespace std;
main(){

char str[5][20];

cout<<"Enter 5 strings : "<<endl;

for(int i=0;i<5;i++)
    cin>>str[i];

int t;
char temp[20];

for(int j=0;j<5;j++){
      t=strcmp(str[j],str[j+1]);
    if(t>0)
    {

        int x,y,z;
        x=y=z=0;

        while(str[j][x]!='\0'){
        temp[x]=str[j][x];
        x++;
        }

        while(str[j+1][y]='\0'){
        str[j][y]=str[j+1][y];
        y++;
        }

        while(temp[z]!='\0'){
        str[j+1][z]=temp[z];
        }

    }
}

cout<<endl<<"Sorted : "<<endl;

for(int i=0;i<5;i++)
cout<<endl<<str[i];


}
