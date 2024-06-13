#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool chuaxet[1001];
bool check;
void DFS(int s,int par)
{
    chuaxet[s]=true;
    for(auto x:v[s])
    {
        if(chuaxet[x]&&x!=par)
        {
            check=true;
            return;
        }
        else if(!chuaxet[x])
        {
            DFS(x,s);
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<1001;i++) v[i].clear();
        memset(chuaxet,false,sizeof chuaxet);
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        check=false;
        for(int i=1;i<=n&&!check;i++)
        {
            if(!chuaxet[i]) DFS(i,0);
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}