#include<iostream>
using namespace std;
main(){

int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={1,2,3,4,5,6,7,8,9};
int c[3][3];

cout<<"Matrix A : "<<endl<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;cout<<endl;
cout<<"Matrix B : "<<endl<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<b[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;cout<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     c[i][j]=a[i][j]-b[i][j];
    }
}

cout<<"Matrix C : "<<endl<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<c[i][j]<<"\t";
    }
    cout<<endl;
}

}
