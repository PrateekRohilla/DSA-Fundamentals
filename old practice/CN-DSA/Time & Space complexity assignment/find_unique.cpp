#include <iostream>
#include<algorithm>
using namespace std;

int findUnique(int *arr, int n) {
    /*
	sort(arr,arr+n);
    
    for(int i=1;i<n;i++)
    	if(arr[i-1] != arr[i])
    		return arr[i];
*/
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j] != arr[i] && i !=j)
                return arr[i];
            
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
