#include<iostream>
using namespace std;
main(){

int a[3][3];
int b[3][3];
int c[3][3];

int sum;

cout<<"Matrix A : "<<endl<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
    cout<<endl;
}
cout<<endl;cout<<endl;
cout<<"Matrix B : "<<endl<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>b[i][j];
    }
    cout<<endl;
}
cout<<endl;cout<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            sum=0;
        for(int k=0;k<3;k++){
            sum+=a[i][k]*b[k][j];
        }
        c[i][j]=sum;
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
