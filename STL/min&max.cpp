#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int a = 10, b = 20;

    cout << min(a, b);
    cout << max(a, b);      

    // for min()/max() ->  TC - O(1) SC - O(1)


    /*
    minmax(a, b): returns a pair, 1st element	minimum & 2nd element maximum

    minmax(array of elements): accepted argument is a list of integers/strings

    TC - O(n)
    SC - O(1)
    */

    // declaring pair to catch the return value
    pair<int, int> mnmx;

    // Using minmax(a, b)
    mnmx = minmax(53, 23);

    cout << mnmx.first << endl;
    cout << mnmx.second << endl;

    // Using minmax({array of elements})
    mnmx = minmax({2, 5, 1, 6, 9});

    cout << mnmx.first << endl;
    cout << mnmx.second << endl;

    cout << endl << endl;
    
    /*
    minmax_element to get the minimum & maximum elements in a container. 
    It returns a pair of iterators.
    TC - O(n) SC - O(1)
    */

    // Using minmax_element with vector
    vector<int> V = {3, 6, 8, 1, 8, 44};

    auto it = minmax_element(V.begin(), V.end());

    cout << *it.first << " " << *it.second << endl; // prints 1 44

    cout << endl << endl;

    // To get index of elements with max & min value, apply pointer arithmetic, or
    // call to distance function.

    int min_idx = distance(V.begin(), it.first);
    int max_idx = distance(V.begin(), it.second);

    cout << min_idx << ", " << max_idx << endl; // prints 3 5
}