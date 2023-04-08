#include<windows.h>
#include<iostream>
using namespace std;
main(){

    SYSTEMTIME stime;
    GetSystemTime(&stime);
    cout<<stime.wDay<<" | "<<stime.wMonth<<" | "<<stime.wYear<<endl<<endl;
}
