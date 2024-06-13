#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
vector<int> v1[1001];
bool chuaxet[1001];
void Tree_DFS(int s)
{
    chuaxet[s]=true;
    for(auto x:v1[s])
    {
       if(!chuaxet[x])
       {
        v.push_back({s,x});
        Tree_DFS(x);
       }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
       int n,m,u; cin>>n>>m>>u;
       v.clear();
       for(int i=0;i<1001;i++) v1[i].clear();
       memset(chuaxet,false,sizeof chuaxet);
       for(int i=0;i<m;i++)
       {
        int x,y; cin>>x>>y;
        v1[x].push_back(y);
        v1[y].push_back(x);
       }
        Tree_DFS(u);
        bool check=false;
       for(int i=1;i<=n&&!check;i++)
       {
        if(!chuaxet[i]) check=true;
       }
       if(check) cout<<"-1\n";
       else{
        for(auto x:v)
         {
            cout<<x.first<<" "<<x.second<<endl;
         }
       }
    }
}