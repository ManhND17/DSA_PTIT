#include<bits/stdc++.h>
using namespace std;
int parent[1001];
int num[1001];
int n,m;
struct canh{
    int dau;
    int cuoi;
    int ts;
};
bool cmp(canh a,canh b)
{
    return a.ts<b.ts;
}
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
int Union(int u,int v)
{
    int a=Find(u);
    int b=Find(v);
    if(a==b) return 0;
    if(num[a]<num[b]) swap(a,b);
    parent[b]=a;
    return 1;
}
main()
{
    int t; cin>>t;
    int dau,cuoi,ts;
    while(t--)
    {
      cin>>n>>m;
      vector<canh> v;
      v.clear();
      Init();
      for(int i=0;i<m;i++)
      {
        cin>>dau>>cuoi>>ts;
        v.push_back({dau,cuoi,ts});
      }
      sort(v.begin(),v.end(),cmp);
      int dem=0;
      long ck=0;
      for(auto x:v)
      {
          if(!Union(x.dau,x.cuoi)) continue;
          dem=dem+x.ts;
      }
      cout<<dem<<endl;
    }
}