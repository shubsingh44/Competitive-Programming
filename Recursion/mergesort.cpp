#include<bits/stdc++.h>
using namespace std;

void mergearray(int input[],int si, int ei){
    int i=si;
    int mi=(si+ei)/2;
    int j=mi+1;
    int rarr[ei-si+1];
    int ri=0;
    while(i<=mi&&j<=ei){
        if(input[i]<=input[j]){
            rarr[ri++]=input[i++];
        }
        else
            rarr[ri++]=input[j++];
     }
     while(i<=mi)
         rarr[ri++]=input[i++];
     while(j<=ei)
        rarr[ri++]=input[j++];
     for(int k=0;k<ri;k++)
     {
         input[si++]=rarr[k];
     }

}

void merge1(int input[],int si, int ei){
    if(si>=ei)
        return;
    int mid=(si+ei)/2;
  merge1(input,si,mid);
  merge1(input,mid+1,ei);
  mergearray(input,si,ei);
  return;
}
void mergeSort(int input[], int size){
	// Write your code here
    merge1(input,0,size-1);
  for(int i=0;i<size;i++)
      cout<<input[i]<<" ";
}

int main(){

   int n,i;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];

    mergeSort(arr,n);
}

