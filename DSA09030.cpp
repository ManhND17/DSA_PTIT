#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool visited[1001];
int side[1001];
bool check;
void DFS(int s)
{
    visited[s]=true;
    if(!check) return;
    for(auto x:v[s])
    {
        if(!visited[x])
        {
            side[x]=1-side[s];
            DFS(x);
        }
        else if(side[x]==side[s])
        {
            check=false;
            return;
        }
    }

}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        memset(visited,false,sizeof visited);
        memset(side,0,sizeof side);
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        check=true;
        for(int i=1;i<=n;i++)
        {
            if(!visited[i]) DFS(i);
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}