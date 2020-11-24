#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int put()
{
  unsigned long long int a,b,n,m,i,j;
    cin>>a>>b;
    unsigned long long int count = 0,count1=0,sum=0;
    for(i=a;i<=b;i++)
    {
        count=0;
        n=i;
        while(n)
      {
        n &= (n-1) ;
        count++;
      }
      sum+=count;
    }


    n=sum;
    //cout<<"the n is"<<n<<endl;
    long long int n1;
    for(i=n+1;i<n+500;i++)
    {
      for(j=2;j<=i/2;j++)
      {
          if(i%j==0)
              break;
      }
      //cout<<j<<endl;
        if(j>i/2)
        {
            n1=i;
            break;
        }
    }
    //cout<<"teh n1 "<<n1<<endl;
    unsigned long long int sum1=0;
    for ( i=1; i<=sqrt(sum)+1 ; i++)
    {
        if (sum%i==0)
        {
            // If divisors are equal, print only one
            if (sum/i == i)
                sum1++;

            else // Otherwise print both
                sum1=sum1+2;
        }
    }
    long long int sum2=0;
    for ( i=1; i<=sqrt(sum+1)+1 ; i++)
    {
        if ((sum+1)%i==0)
        {
            // If divisors are equal, print only one
            if ((sum+1)/i == i)
                sum2++;

            else // Otherwise print both
                sum2=sum2+2;
        }
    }
    //cout<<sum1<<endl;
    long long int v=(sum+1)*sum2;
    long long int u=sum1*n;
    long long int y=n1*2;
    if(u<y&&u<v)
    {

        cout<<u<<endl;
    }

    else if(y<u&&y<v)
        cout<<y<<endl;
    else
        cout<<v<<endl;
    return 0;
}
int main() {
    int n;
    cin>>n;
    while(n--)
        put();
    return 0;
}
