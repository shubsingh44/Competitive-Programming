#include<bits/stdc++.h>
using namespace std;
int knapsack1(int* weights, int* values, int n, int maxWeight, int **dp){
    if(maxWeight<=0){
        return 0;
    }
    if(n<0)
        return 0;
    if(dp[n][maxWeight]>-1)
        return dp[n][maxWeight];
int sum;
if(maxWeight-weights[0]>=0)
sum=max(knapsack1(weights+1,values+1,n-1,maxWeight,dp),knapsack1(weights+1,values+1,n-1,maxWeight-weights[0],dp)+values[0]);
else
sum=knapsack1(weights+1,values+1,n-1,maxWeight,dp);
    dp[n][maxWeight]=sum;
return sum;
}


int knapsack(int* weights, int* values, int n, int maxWeight){

    int** dp = new int*[n+1];
	for (int i = 0; i <=n; i++) {
		dp[i] = new int[maxWeight + 1];
		for (int j = 0; j <=maxWeight; j++) {
			dp[i][j] = -1;
		}}
     return knapsack1(weights,values,n,maxWeight,dp);
}


int main(){

  int n;
  cin >> n;
  int* weights = new int[n];
  int* values = new int[n];

  for(int i = 0; i < n; i++){
    cin >> weights[i];
  }

  for(int i = 0; i < n; i++){
    cin >> values[i];
  }

  int maxWeight;
  cin >> maxWeight;

  cout << knapsack(weights, values, n, maxWeight);

}
