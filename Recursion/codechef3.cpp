#include<bits/stdc++.h>
using namespace std;
int put()
{
   long long  int n,x,i,j;
    cin>>x>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(n<4){
        cout<<"impossible"<<endl;
        return 0;
    }
    long long int arr[n+1];
    memset(arr,0,sizeof(arr));
    unsigned long long int sum=0;
    sum=n*(n+1);
    sum/=2;
    sum-=x;
    if(sum%2)
    {
        cout<<"impossible"<<endl;
        return 0;
    }

        unsigned long long int sum2=0;
        sum/=2;
        long long int sum1=0;
        string s;
        arr[x]=2;
        for(i=n;i>0;i--)
        {
            if(i!=x)
            {
                if(sum2+i<=sum)
                {
                    sum2+=i;
                    arr[i]=1;
                    if(sum2==sum)
                        break;

                }
            }


        }
       if(sum2==sum)
       {
           for(i=1;i<=n;i++)
             cout<<arr[i];
           cout<<endl;
       }
       else
       {
           memset(arr,0,sizeof(arr));
           arr[x]=2;
           sum2=0;
           for(i=1;i<=n;i++){
               if(i!=x)
               {
                    if(sum2+i<=sum)
                  {
                    sum2+=i;
                    arr[i]=1;
                    if(sum2==sum)
                        break;

                  }
               }
           }
            if(sum2==sum)
       {
           for(i=1;i<=n;i++)
             cout<<arr[i];
           cout<<endl;
       }
       else
        cout<<"impossible"<<endl;

    }


}
int main(){
int n;
cin>>n;
while(n--)
    put();
return 0;
}
