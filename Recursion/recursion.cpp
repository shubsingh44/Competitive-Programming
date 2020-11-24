#include<bits/stdc++.h>
using namespace std;
string s;
int makestring(int a,int b)
{
       if(a%b==0)
       {
          s=s+'1';
         for(int i=0;i<a-1;i++)
          {
            s=s+'0';
          }
       }
    else
     {
        makestring(b,a%b);
          for(int i=0;i<a-b;i++)
          {
            s=s+s[i];
          }
     }
}
int put()
{
    long long int a,b;
    cin>>a>>b;
    makestring(a,b);
    long long int p=1,sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        int q=s[i]-48;
        sum+=(p*q);
        p=p*2;
        p%=1000000007;
        sum%=1000000007;
    }
    cout<<sum<<endl;
    s.clear();

}
int main()
{
    int n;
    cin>>n;
    while(n--)
        put();
    return 0;
}
