#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int binarysearch(ll value,ll sumarr[],ll si,ll ei)
{
    while(si<=ei)
    {
        int mid=(si+ei)/2;
        if(sumarr[mid]>=value&&sumarr[mid-1]<=value){

               cout<<mid<<" "<<value-sumarr[mid-1]<<endl;

           return 0;
         }
         else if(sumarr[mid]>value&&sumarr[mid-1]>value){
            ei=mid;
         }
         else if(sumarr[mid]<=value&&sumarr[mid+1]>=value){
            cout<<mid+1<<" "<<value-sumarr[mid]<<endl;
            return 0;
         }
         else if(sumarr[mid]<value&&sumarr[mid+1]<value){
            si=mid;
         }
    }

    return 0;
}
int main()
{
    ll n,m,i;
    cin>>n>>m;
    ll arr[n],arr1[m];
    ll sumarr[n+1];
    sumarr[0]=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
            sumarr[1]=arr[0];
        else
            sumarr[i+1]=sumarr[i]+arr[i];
    }

    for(i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<m;i++)
    {
        binarysearch(arr1[i],sumarr,0,n);
    }
}
