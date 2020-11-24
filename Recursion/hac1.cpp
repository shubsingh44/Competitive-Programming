#include<bits/stdc++.h>
using namespace std;
vector <int> v[1001];
int arr[1001];
int node,edge;
int dfs(int a){
    int i,j,k=0;
    stack <int> s;
    s.push(a);
    k++;
    while(!s.empty())
    {

        j=s.top();
        s.pop();
        for(i=0;i<v[j].size();i++)
        {
            s.push(v[j][i]);
            k++;

        }

    }
    return k;

}

int main()
{
    int i;
    int a,b;

    cin>>node>>edge;
    if(node%2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(i=0;i<edge;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);

    }

   int count=0;
  for(i=2;i<=node;i++)
  {
      int sum=dfs(i);
      if(sum%2==0)
          count++;
  }
    cout<<count<<endl;
    return 0;
}
