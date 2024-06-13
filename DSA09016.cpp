#include<bits/stdc++.h>
using namespace std;
vector<int> check;
vector<int> v[1001];
bool ok;
void DFS(int s)
{
   check[s]=1;
   for(auto x:v[s])
   {
    if(check[x]==0)
    {
        DFS(x);
    }
    else if(check[x]==1){
        ok=true;
    }
   }
   check[s]=2;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        check.clear();
        check.resize(n+1,0);
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        ok=false;
        for(int i=1;i<=n&&!ok;i++)
        {
            if(!check[i]) DFS(i);
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}