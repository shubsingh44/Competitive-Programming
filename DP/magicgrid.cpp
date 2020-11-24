#include <bits/stdc++.h>
using namespace std;

int magicgrid(int input[][501],int m, int n){
    int ** dp = new int*[m];
	for (int i = 0; i < m; i++) {
		dp[i] = new int[n];
	}
	dp[m - 1][n-1] = 1;
    dp[m - 2][n-1] = 1;
    dp[m - 1][n-2] = 1;
	for (int i = m - 3; i >= 0; i--) {
		dp[i][n -1] = dp[i + 1][n-1] - input[i][n-1];
        if(dp[i][n -1] <=0)
            dp[i][n -1]=1;
	}

	for (int j = n - 3; j >=0; j--) {
		dp[m -1][j] = dp[m - 1][j + 1] - input[m-1][j];
        if(dp[m-1][j] <=0)
            dp[m-1][j]=1;
	}

	for (int i = m - 2; i >=0; i--) {
		for (int j = n -2 ; j >=0 ; j--) {
			dp[i][j] =  min(dp[i+1][j],dp[i][j + 1])-input[i][j];
            if(dp[i][j]<=0)
                dp[i][j]=1;
		}
	}
	return dp[0][0];
}


int put(){
  int r,c;
  cin>>r>>c;
  int arr[501][501];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
        cout<<magicgrid(arr,r,c)<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
        put();
    return 0;
}
