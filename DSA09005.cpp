#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
void BFS(int u)
{
   queue<int> q;
   q.push(u);
   chuaxet[u]=false;
   cout<<u<<" ";
   while(q.size())
   {
    int x=q.front(); q.pop();
    for(auto i:v[x])
    {
     if(chuaxet[i]){
        q.push(i);
        chuaxet[i]=false;
        cout<<i<<" ";
     }
    }
   }
   cout<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,u;
        cin>>n>>m>>u;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<=1000;i++) v[i].clear();
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        BFS(u);
        cout<<endl;
    }
}