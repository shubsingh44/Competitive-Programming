#include<bits/stdc++.h>
using namespace std;
bool vis[10000]={0};
vector<int> v[1000];
void dfs(int s){

   vis[s]=true;
   for(i=0;i<v[s].size();i++)  {
       if(vis[v[s][i]] == false)
          dfs(v[s][i]);
   }
}

int main()
{
    int n,i,a,b;
    int edge,node;
    cin>>node>>edge;
    vector<int> v[9];
    for(i=0;i<10;i++)
        vis[i]=0;
    for(i=0;i<edge;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    dfs(1);
}
