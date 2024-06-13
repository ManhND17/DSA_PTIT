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
void duyetcanhcau(int n)
{
    for(int u=1;u<=n;u++)
    {
        chuaxet[u]=false;
        if(u==1) DFS(2);
        else DFS(1);
        int ok=0;
        for(int i=1;i<=n;i++)
        {
            if(chuaxet[i]) {
                ok=1;
                break;
            }
        }
        if(ok==1) cout<<u<<" ";
        memset(chuaxet,true,sizeof(chuaxet));
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int m,n; cin>>n>>m;
        for(int i=0;i<1001;i++) v[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        duyetcanhcau(n);
        cout<<endl;
    }
}