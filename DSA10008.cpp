#include<bits/stdc++.h>
using namespace std;
#define pll pair<long long,long long> 
#define ll long long
int n,m,u;
vector<pll> ke[1005];
void Dijkstra()
{
    vector<long long> d(n+1,1e9);
    d[u]=0;
    priority_queue<pll,vector<pll>,greater<pll>> q;
    q.push({0,u});
    while(q.size())
    {
        pll k=q.top(); q.pop();
        ll dist=k.first;
        int s=k.second;
        if(dist>d[s]) continue;
        for(pll e:ke[s])
        {
            ll w=e.second;
            ll v=e.first;
            if(d[v]>d[s]+w)
            {
                d[v]=d[s]+w;  
                q.push({d[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<d[i]<<" ";
    cout<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m>>u;
        for(int i=0;i<1005;i++) ke[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y,z; cin>>x>>y>>z;
            ke[x].push_back({y,z});
            ke[y].push_back({x,z});
        }
        Dijkstra();
    }
}
