#include<stdio.h>
using namespace std;
int put()
{
    int n,i,j;
    cin>>n;
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
    for(i=0;i<n;i++)
        cin>>arr1[i];
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            dp[i][j]=arr[i]^arr[j];
        }
    }

}
int main()
{
    int n;
    cin>>n;
    while(n--)
        put();
    return 0;

}
