#include<bits/stdc++.h>
using namespace std;
int knapsack(int* weights, int* values, int n, int maxWeight)
{
    int dp[maxWeight+1];
    for(int i=0;i<=maxWeight;i++)
    {
        dp[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=maxWeight;j>=weights[i];j--)
        {
            dp[j]=max(dp[j],values[i]+dp[j-weights[i]]);
        }
    }
    return dp[maxWeight];
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
