#include<bits/stdc++.h>
using namespace std;
int lcs(int *input,int n){
        int aarr[n];
        int darr[n];
        aarr[0]=1;
        int i,j;
        for(i=1;i<n;i++){
            aarr[i]=1;
        for(j=i-1;j>=0;j--){
            if(input[j]>=input[i])
            continue;
            else
             aarr[i]+=1;
        }
      }
      for(i=1;i<n;i++){
            darr[i]=1;
        for(j=i-1;j>=0;j--){
            if(input[j]<=input[i])
            continue;
            else
             darr[i]+=1;
        }
      }

}
int main(){
int i,n;
int *arr;
cin>>n;
for(i=0;i<n;i++)
    cin>>arr[i];
lcs(arr,n);
}

