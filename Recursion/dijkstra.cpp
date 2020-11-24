
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v[10];
typedef pair<int, int> iPair;
int dis[10];
# define INF 0x3f3f3f3f

int dij(int s){

    priority_queue<iPair,vector <iPair>,greater<iPair> >pq;
    pq.push(make_pair(0,s));
    for(int i=0;i<10;i++)
        dis[i]=INT_MAX;
    dis[s]=0;
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        for(auto i = v[u].begin(); i != v[u].end();i++)
         {

            int v = i->first;
            int weight = i->second;
            if(dis[v] > dis[u] + weight)
               {
                 dis[v] = dis[u] + weight;
                 pq.push(make_pair(dis[v], v));
               }
         }
    }
    return 0;
}

int main(){
 int i,j,k,l,m,n,node,edge,x,y,weight;
 cin>>node>>edge;
 for(i=0;i<edge;i++)
 {
     //cout<< "enter edge and weight"<<endl;
     cin>>x>>y>>weight;
     v[x].push_back(make_pair(y,weight));
     v[y].push_back(make_pair(x,weight));

 }
 /*for(i=1;i<=node;i++)
 {

     for(auto it=v[i].begin();it<v[i].end();it++)
     {
         cout<<"edge from"<< i <<"to";
         cout<<" "<<it->first<<" and weight"<<it->second<<endl;

     }*/


     cin>>k;
     dij(k);
         //printf("Vertex   Distance from Source\n");
  for(i=1;i<=ver;i++)
    {
        cout<<dis[i]<<" ";
    }

 }





