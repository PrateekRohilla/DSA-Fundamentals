#include<iostream>
using namespace std;
main(){

int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int t;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}

cout<<endl<<endl<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i<j){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}

}
