#include<bits/stdc++.h>
using namespace std;
vector< vector < pair<int,int> > >v;
#define pb push_back
#define mp make_pair
typedef pair<int,int> pi;
int check[100005];
int dis[100005];
int ver,edge;
int dfs(int a)
{
    int i,j,k,b,c;
    priority_queue< pi,vector<pi>,greater<pi> > pq;
    dis[a]=0;
    pq.push(mp(0,a));
    while(!pq.empty())
    {
        b=pq.top().second;
        pq.pop();
        if(check[b]) continue;
            check[b] = 1;
        for(auto it=v[b].begin();it!=v[b].end();it++)
        {

              j=it->first;
              k=it->second;
              if(dis[b]+k<dis[j])
              {
                  dis[j]=dis[b]+k;
                  pq.push(mp(dis[j],j));
              }

        }
     }
}

int put()
{
    int i,j,k;
    int x,y,z,p;
    cin>>ver>>edge;
    v.resize(ver+1);
    for(i=0;i<edge;i++)
    {
      cin>>x>>y>>z;
      v[x].pb(mp(y,z));
      v[y].pb(mp(x,z));
    }

    for(i=1;i<=ver;i++)
    {
        check[i]=0;
        dis[i]=INT_MAX;
    }
    cin>>p;
    dfs(p);
    for(i=1;i<=ver;i++)
    {
        if(i!=p||dis[i]==INT_MAX)
        {
            cout<<dis[i]<<" ";
        }

    }
    v.clear();
    cout<<"\n";
    return 0;
}

int main() {
    int n;
    cin>>n;
    while(n--)
        put();
    return 0;
}
