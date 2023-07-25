#include <iostream>
using namespace std;
/*
Naive Approach for GCD - 
basic idea is to find minimum of two numbers & find its highest factor 
which is also a factor of other number
*/

/*
Euclidean Algorithm for GCD - 
subtract smaller number from larger one (we reduce a larger number), GCD doesn’t change. 
If we keep subtracting repeatedly the larger of two, we end up with GCD.
instead of subtraction, if we divide the smaller number, 
the algorithm stops when we find the remainder 0.
*/
//TC - O(min(a,b))  SC - O(1)
int gcd(int a, int b){

    if(a==0)
        return b;
    if(b==0)
        return a;

    while(a != b){

        if(a>b)
            a = a-b;
        else
            b = b-a;
    }

    return a;
}

//TC - O(log(min(a,b)))  SC - O(log(min(a,b)))
int gcdRec(int a, int b){
	
    if (a == 0)
        return b;
	
    return gcd(b % a, a);
}

int main(){

	cout<<gcd(24,24);
}


/*
STL - 
__gcd(a,b)

TC - O(logN)  SC - O(1)
*/
