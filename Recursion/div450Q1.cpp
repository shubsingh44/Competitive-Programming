#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    int arr[n][2];
    int count=0,count1=0;
    for(i=0;i<n;i++)
    {

            cin>>arr[i][0]>>arr[i][1];
            if(arr[i][0]<0)
                count++;
            else if (arr[i][0]>0)
                count1++;

    }
    if(count1==1||count==1)
        cout<<"Yes"<<endl;
    else if(count1==0||count==0)
        cout<<"Yes"<<endl;
    else
    cout <<"No"<<endl;

    return 0;
}
