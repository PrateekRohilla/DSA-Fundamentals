#include<iostream>
main(){

using namespace std;

int r=3,s=21,a=11;

cout<<"Enter the ages of ram,shyam,ajay respectively: ";
//cin>>r>>s>>a;

if(r<s){
    if(r<a){
        cout<"Ram is younger among all";
    }
    else{
        cout<<"ajay is younger among all";
    }

}
else{
    if(s<a){
        cout<<"shyam is younger among all";
    }
    else{
        cout<<"ajay is younger among all";
    }
}
}
