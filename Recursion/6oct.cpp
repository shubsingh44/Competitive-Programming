#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main()
{
    ull a,b,c,d,n,i,j,k;
    cin>>n;
    ull arr[n],arr1[n];
    vector<ull>v,v1;
    v.resize(2000001);
    v1.resize(2000001);
    fill(v.begin(), v.end(), 0);
    fill(v1.begin(), v1.end(), 0);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        v[arr[i]]=1;



    }
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        v1[arr1[i]]=1;

    }
  int count=0;
  for(i=0;i<n;i++)
   {

     for(k=0;k<n;k++)
      {
          ull x=arr[i]^arr1[k];


            if(v[x]==1||v1[x]==1)
                count++;
      }
   }

    //cout<<count<<endl;
    if(count%2)
        cout<<"Koyomi"<<endl;
    else
        cout<<"Karen"<<endl;
    return 0;
}
