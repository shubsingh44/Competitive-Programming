#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define ll long long int
int main(){
double r,d;
int n;
cin>>r>>d>>n;
double a,b,c;
int arr[n][3];
double count=0;
double dis;
for(int i=0;i<n;i++)
{
  cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
  a=arr[i][0];
  b=arr[i][1];
  c=arr[i][2];
  dis=sqrt(a*a+b*b);
  cout<<dis<<endl;
  cout<<dis+c<<endl;
  if((dis+c<=r)&&(dis-c>=r-d))
    count++;
}
cout<<count<<endl;
return 0;
}
