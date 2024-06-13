#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int n,e,m; 
int color[11];
bool iscolor(int s,int c)
{
    for(int x:v[s])
    {
        if(color[x]==c&&color[x]) return false;
    }
    return true;
}
bool DFS(int s)
{
    if(s==n+1) return true;
    for(int i=1;i<=e;i++)
    {
        if(iscolor(s,i))
        {
          color[s]=i;
          if(DFS(s+1)) return true;
          color[s]=0;
        }
    }
    return false;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m>>e;
        memset(color,0,sizeof color);
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
         if(DFS(1)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}