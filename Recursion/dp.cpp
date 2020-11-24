#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,k;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	       cin>>arr[i];
	   int b=0;
	   cin>>k;
	   for(i=0;i<n;i++)
	   {
	       for(j=i+1;j<n;j++)
	       {
	           if((arr[i]+arr[j])%k==0)
	           {
	               cout<<arr[i]+arr[j]<<endl;
	               cout<<"True"<<endl;
	               b=1;
	               break;

	           }
	       }
	       if(b==1)
	          break;
	   }

	    if(b==0)
	     cout<<"False"<<endl;

	}
	return 0;
}
