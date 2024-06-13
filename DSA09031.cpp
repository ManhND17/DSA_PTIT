#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int visit[101][101];
int arr[101][1001];
vector<pair<int,int>> v;
map<pair<pii,pii>,int> mp;
set<pair<pii,pii>> se;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int n,m,k;

bool check(int x,int y)
{
    if(x>=1&&y>=1&&x<=n&&y<=n) return true;
    return false;
}

void DFS(int x,int y)
{
    visit[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int X=x+dx[i];
        int Y=y+dy[i];
        if(check(X,Y)&&!visit[X][Y]&&!mp[{{x,y},{X,Y}}])
        {
            DFS(X,Y);
        }
    }
}
void Solve()
{
    cin>>n>>k>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,a,b; cin>>u>>v>>a>>b;
        mp[{{u,v},{a,b}}]=1;
        mp[{{a,b},{u,v}}]=1;
    }
    for(int i=0;i<k;i++)
    {
        int a,b; cin>>a>>b;
        arr[a][b]=1;
        v.push_back({a,b});
    }
    for(auto ii:v)
    {
        memset(visit,0,sizeof visit);
        DFS(ii.first,ii.second);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i][j]&&visit[i][j]==0)
                {
                    se.insert({{ii.first,ii.second},{i,j}});
                }
            }
        }
    }
    cout<<se.size()/2;
}
main()
{
    Solve();
}