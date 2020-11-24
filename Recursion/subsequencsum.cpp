#include<bits/stdc++.h>
using namespace std;
void printSubsetSumToK(int input[], int size, int k);
int main(){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       int k;
       cin>>k;
      printSubsetSumToK(arr,n,k);
}

void printsubset(int input[],int size,int k,int output[],int m){

    if(size==0)
    {

      if(k==0)
      {
        for(int i=0;i<m;i++)
            cout<<output[i]<<" ";
            cout<<endl;
      }
        //output[0]=0;
        return ;
    }
   printsubset(input+1,size-1,k,output,m);
   //int arr[m+1];
   //for(int i=0;i<m;i++)
     //arr[i]=output[i];
   //if(arr[0]+input[0]<=k){
     //arr[m]=input[0];
     //arr[0]+=input[0];
     //output[0]+=input[0];
     output[m]=input[0];
     printsubset(input+1,size-1,k-input[0],output,m+1);

   //}
  return ;
}


void printSubsetSumToK(int input[], int size, int k) {
  int output[1000]={0};
  printsubset(input,size,k,output,0);
}
