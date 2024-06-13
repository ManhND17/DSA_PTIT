#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int parent[100001],num[100001];
void Init()
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        num[i]=1;
    }
}
int Find(int u)
{
    if(u!=parent[u])
    {
      parent[u]=Find(parent[u]);
    }
    return parent[u];
}
void Union(int u,int v)
{
    int a=Find(u);
    int b=Find(v);
    if(a==b) return;
    if(num[a]<num[b]) swap(a,b);
    parent[b]=a;
    num[a]+=num[b];
    ans=max(ans,num[a]);
}

main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        Init();
        ans=0;
        while(m--)
        {
            int x,y; cin>>x>>y;
            Union(x,y);
        }
        if(ans==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}