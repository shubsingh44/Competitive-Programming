#include <bits/stdc++.h>
using namespace std;
int output(string &s,int size,int *out)/* we are taking reference of string s so &s.
 if we use s then it copy string which is much slower.
 */
 {
      if (size==0||size==1)
    return 1;
if(out[size]>0)
    return out[size];
    int count=0;
    if(s[size-1]!='0')
    count = output(s,size-1,out);
     //cout<<"The size"<<(s[size-2]-'0')*10+(s[size-1]-'0')<<endl;
if((s[size-2]-'0')*10+(s[size-1]-'0')<=26&&s[size-2]!='0')
    count+=output(s,size-2,out);
    count=count%1000000007;
   out[size]=count;
   return count;
}

int main()
{
    string s[10000];
    int n=1;
    while(s[n-1]!="0"){
         cin>>s[n];
         n++;
    }
    int count=0;



    for(int i=1;i<n-1;i++)
     {
         //cout<<s[i][0]-'0'<<endl;
         int out[s[i].length()+1]={0};
         count=output(s[i],s[i].length(),out);
         cout<<count<<endl;//%(pow(10,9)+7);
         count=0;
     }
     return 0;
}
