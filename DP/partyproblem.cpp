#include<bits/stdc++.h>
using namespace std;
int sum1=0;
int party(int *arr, int *fun, int a, int n){

     if(n<0||a<0)
         return 0;
    int sum;
    if(a-arr[0]>=0){
    int temp1= party(arr+1,fun+1,a,n-1);
    int temp2= party(arr+1,fun+1,a-arr[0],n-1)+fun[0];
    if(temp1>temp2)
            sum=temp1;
    else
        {
           sum=temp2;

           sum1+=arr[0];
        }
    //max(party(arr+1,fun+1,a,n-1),party(arr+1,fun+1,a-arr[0],n-1)+fun[0]);
    }

else{
     sum=party(arr+1,fun+1,a,n-1);
    }
     return sum;
}

int put(int a, int b){

    int arr[b], fun[b];
    for(int i=0;i<b;i++){
        cin>>arr[i];
        cin>>fun[i];
    }

    int temp=party(arr,fun,a,b);
    cout<<sum1<<" "<<temp<<endl;
    sum1=0;
}

int main()
{
    while(1){
    int a,b;
    cin>>a>>b;
    if(a!=0&&b!=0)
        put(a,b);
     else
         break;
    }
    return 0;
}

