#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
void DFS(int u)
{
    chuaxet[u]=false;
    for(auto x:v[u])
    {
        if(chuaxet[x]) DFS(x);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<1001;i++) v[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<n-1;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        DFS(1);
        bool check=true;
        for(int i=2;i<=n;i++)
        {
            if(chuaxet[i]) check=false;
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}