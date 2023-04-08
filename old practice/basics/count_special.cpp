#include <bits/stdc++.h>
using namespace std;
int countSpecials(int[], int, int);
int main() {

	int testcase;
	cin >> testcase;

	while(testcase--){
	    int sizeof_array, K;
	    cin >> sizeof_array >> K;

	    int arr[sizeof_array];

	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
	    cout << countSpecials(arr, sizeof_array, K) << endl;

	}

	return 0;
}

int countSpecials(int arr[], int sizeof_array, int K){

    int f = floor(sizeof_array/K);

    int n[10]={0};
    int t,flag=0;

    for(int i=0;i<sizeof_array;i++){
        t=arr[i];
        n[t]+=1;
    }
    for(int i=0;i<10;i++){
        if(n[i]==f)
            flag++;
    }
    return flag;

}
