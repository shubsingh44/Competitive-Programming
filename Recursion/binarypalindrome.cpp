#include<bits/stdc++.h>
using namespace std;
int a,b;
int cost(int arr[],int arr1[],int n,int m,int c)
{
  if(c<=0)
        return 0;
  else if(n>=a||m>=b)
      return 0;
  else
     return 1+max(cost(arr,arr1,n+1,m,c-arr[n]),cost(arr,arr1,n,m+1,c-arr1[m]));
}
int main()
{
    int n,m,c,i;
    cin>>a>>b>>c;
    int arr[a],arr1[b];
    for(i=0;i<a;i++)
        cin>>arr[i];
    for(i=0;i<b;i++)
        cin>>arr1[i];
    cout<<cost(arr,arr1,0,0,c);

    return 0;
}
