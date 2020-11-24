#include <bits/stdc++.h>
using namespace std;

int coin_change(int n, int *d, int numD, int output[][1000]) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	if (numD == 0) {
		return 0;
	}
	if (output[n][numD] > -1) {
		return output[n][numD];
	}
	int first = coin_change(n - d[0], d, numD,output);
	int second = coin_change(n, d + 1, numD - 1,output);
	output[n][numD] = first + second;
	return first + second;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int nodenom;
    cin>>nodenom;
	int output[1000][1000];
	for(int i=0;i<n+1;i++){
        for(int j=0;j<nodenom+1;j++)
            output[i][j]=-1;
	}
   cout << coin_change(n,arr,nodenom,output)<<endl;
}
