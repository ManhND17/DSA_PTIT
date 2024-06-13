#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
int dem;
void DFS(int u)
{
    if(chuaxet[u]) chuaxet[u]=false;
    dem++;
    for(int x:v[u])
    {
        if(chuaxet[x]) DFS(x);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<1001;i++) v[i].clear();
        while(m--)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        int ok=0;
        for(int i=1;i<=n;i++)
        {
          memset(chuaxet,true,sizeof(chuaxet));
          dem=0;
          DFS(i);
          if(dem!=n)
          {
            ok=1;
            cout<<"NO\n";
            break;
          }
        }
        if(ok==0) cout<<"YES\n";
    }
}