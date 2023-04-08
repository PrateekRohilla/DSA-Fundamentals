#include<iostream>
using namespace std;
class hello{

public:
    int l;
    int b;

    int area(){
        return l*b;
    }
};

main(){

    hello r1;

    r1.l=10;
    r1.b=20;

    cout<<r1.area();
}
