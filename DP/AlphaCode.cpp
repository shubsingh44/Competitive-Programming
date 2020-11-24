#include <bits/stdc++.h>
using namespace std;
long long  int output(string &s,int size,int *out){
if (size==0||size==1)
    return 1;
if(out[size]>0)
    return out[size];
    long long int count=0;
    if(s[size-1]!='0')
    count = output(s,size-1,out);
     count%=1000000007;

if((s[size-2]-'0')*10+(s[size-1]-'0')<=26 && s[size-2]!='0')
    count+=output(s,size-2,out);
    count=count%1000000007;
   out[size]=count;
   return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;

   long long  int count=0;
         while(1){
         cin>>s;
             if(s=="0")
                 break;
         //cout<<s[i][0]-'0'<<endl;
         int out[s.length()+1]={0};
         count=output(s,s.length(),out);
         cout<<count<<endl;//%(pow(10,9)+7);
         count=0;

         }

     return 0;
}
