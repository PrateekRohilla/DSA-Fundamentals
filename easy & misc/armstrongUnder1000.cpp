// print all armstrong numbers between 1000
#include <iostream>
using namespace std;

int getDigits(int n){

    if(n>0 && n<=9)
        return 1;
    
    int count = 0;

    while(n>0){
        count++;
        n /= 10;
    }

    return count;
}

bool armstrong(int n){

    if(n>1 && n<10)
        return false;

    int ans = n,sum = 0;

    int digits = getDigits(n);

    while(n){
       int l = n%10;

        int prod = l;

        for(int i=digits;i>1;i--){
            prod *= l;
        }

        n /= 10;
        sum += prod;
    }

    if(sum == ans)
        return true;

    return false;
}

main()
{

    int k = 1000;

    for(int i=1;i<=k;i++){

        bool arm = armstrong(i);

        if(arm)
            cout<<i<<" "<<endl;

    }

}