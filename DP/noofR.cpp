#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void put(){
  string s;
  cin>>s;
  int k=s.length();
  int currmax1=0,max1=0,ci=0,cj=0;
    int countr=0,countk=0;
  for(int i=0;i<k;i++){
      if(s[i]=='R')
          countr++;
      else
          countk++;
  }
    if(countr==k)
    {
        cout<<k-1<<endl;
        return;
    }
    /*if(countr==k)
    {
        cout<<k-1<<endl;
        return;
    }*/
  for(int i=0;i<k;i++){
      if(s[i]=='R')
          currmax1--;
      else{
           currmax1++;
          }
          //cj++;
      if(max1<currmax1){
          max1=currmax1;
          cj=i;
        }

      if(currmax1<0){
          currmax1=0;
          ci=i+1;
          //cj=i+1;
    }
  }

for(int i=ci;i<=cj;i++){
     if(s[i]=='K'){
        s[i]='R';
     }
     else{
            s[i]='K';
        }

  }

  int count=0;
  for(int i=0;i<k;i++){
    if(s[i]=='R')
        count++;
  }

    cout<<count<<endl;
    cout<<"max1 "<<max1<<endl;
    cout<<"ci "<<ci<<"cj "<<cj<<endl;
    return;
}

int main(){
  int n;
  cin>>n;
  while(n--)
    put();
  return 0;
}

