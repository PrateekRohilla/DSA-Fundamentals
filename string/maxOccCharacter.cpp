#include<iostream>
using namespace std;

char maxOccChar(string s){

    int arr[26] = {0};

    //store count of character
    for(int i=0;i<s.length();i++){
        int num = 0;
        num = s[i] - 'a';
        arr[num]++;
    }

    //find max occ char
    int max = -1, ans = 0;
    for(int i=0;i<26;i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

main(){

    int t = 5;

    while(t--){
        string s;
        cin>>s;

        cout<<maxOccChar(s)<<endl;
    }

}