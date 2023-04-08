#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){

    if(i > j)
        return;
    
    swap(str[i],str[j]);

    return reverse(str,i+1,j-1);
}

main(){

    string str = "abcdef";
    
    int j = str.length()-1;

    reverse(str, 0, j);

    cout<<str;
}