#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1001];
int n,m,u;
vector<int> List[1001];
void DFS(int u)
{
    chuaxet[u]=false;
    cout<<u<<" ";
    for(int v:List[u]) if(chuaxet[v]) DFS(v);
}
main()
{
    int t,x,y,i; cin>>t;
    while(t--)
    {
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<1005;i++) List[i].clear();
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(u);
        cout<<endl;
    }
}