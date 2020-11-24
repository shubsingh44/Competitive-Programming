#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define make_pair mp
#define push_back pb


int main()
{
    int n;
    cin>>n;
    int arr[n][6];
    int i,j,k;
    bool arr1[1000]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
            arr1[arr[i][j]]=1;
        }
    }

    for(i=0;i<n-1;i++)
    {
       for(j=0;j<6;j++)
       {
           for(k=0;k<6;k++)
            {
                arr1[(arr[i][j]*10)+arr[i+1][k]]=1;

            }
       }
    }
    for(i=n-1;i>0;i--)
    {
       for(j=0;j<6;j++)
       {
           for(k=0;k<6;k++)
            {
                arr1[(arr[i][j]*10)+arr[i-1][k]]=1;
            }
       }
    }
    if(n==3)
    {
        for(j=0;j<6;j++)
       {
           for(k=0;k<6;k++)
            {a
                arr1[(arr[0][j]*10)+arr[2][k]]=1;
            }
       }
        for(j=0;j<6;j++)
       {
           for(k=0;k<6;k++)
            {arr1[(arr[2][j]*10)+arr[0][k]]=1;
            }
       }
    }
    for(i=1;i<1000;i++)
        if(arr1[i]==0)
        break;

    cout<<i-1<<endl;
    return 0;
}
