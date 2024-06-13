#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[505][505];
int visit[505][505];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int ok=0;
char dir[4]={'D','L','R','U'};
bool check(int x,int y)
{
    if(x>=0&&x<n&&y>=0&&y<m) return true;
    return false;
}
void DFS(int x,int y,int cnt,char curdir)
{
    visit[x][y]=1;
    if(a[x][y]=='T'&&cnt<=2){
        ok=1;
        return;
    }
    if(cnt>2||a[x][y]=='T')
    {
        visit[x][y]=0;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(check(nx,ny)&&!visit[nx][ny]&&a[nx][ny]!='*')
        {
            if(dir[i]!=curdir) DFS(nx,ny,cnt+1,dir[i]);
            else DFS(nx,ny,cnt,dir[i]);
        }
    }
    visit[x][y]=0;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ok=0;
        pair<int,int> s1;
        memset(visit,0,sizeof visit);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='S') s1={i,j};
            }
        }
        DFS(s1.first,s1.second,-1,'G');
        if(ok) cout<<"YES\n";
        else cout<<"NO\n"; 
    }
    
}