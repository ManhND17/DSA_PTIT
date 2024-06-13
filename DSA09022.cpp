#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
int truoc[1001];
void Trace_BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    chuaxet[u]=false;
    while(qe.size())
    {
      int k=qe.front(); 
      qe.pop();
      for(auto x:v[k])
      {
        if(chuaxet[x])
        {
            chuaxet[x]=false;
            qe.push(x);
            truoc[x]=k;
        }
      }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=1;i<=m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int q; cin>>q;
        while(q--)
        {
        int u,s;
        cin>>u>>s;
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,0,sizeof(truoc));
        Trace_BFS(u);
        if(truoc[s]==0) {
            cout<<"NO"<<endl;
        }
        else cout<<"YES\n";
        }
    }
}