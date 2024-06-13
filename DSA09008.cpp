#include<bits/stdc++.h>
using namespace std;
int n,m,parent[1001],num[1001];
int ans;
void Init()
{
    for(int i=1;i<=1000;i++)
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
    int a=Find(u),b=Find(v);
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
        while(m--)
        {
            int u,v; cin>>u>>v;
            Union(u,v);
        }
        int dem=0;
        for(int i=1;i<=n;i++)
        {
            if(parent[i]==i) dem++;
        }
        cout<<dem<<endl;
    }
}