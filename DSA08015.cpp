#include<bits/stdc++.h>
using namespace std;
int n,m,u;
int x,y;
char a[35][35][35];
int dp[35][35][35];
vector<string> v[1001];
struct Oxyz{
    int x,y,z;
};
bool check(int x,int y,int z)
{
    if(x>=0&&y>=0&&z>=0&&x<n&&y<m&&z<u&&!dp[x][y][z]&&a[x][y][z]!='#') return true;
    return false;
}
struct Oxyz S,E;
int dx[]={-1,1,0,0,0,0};
int dy[]={0,0,-1,1,0,0};
int dz[]={0,0,0,0,-1,1};
void BFS()
{
    queue<struct Oxyz> qe;
    qe.push(S);
    dp[S.x][S.y][S.z]=0;
    while(qe.size())
    {
        struct Oxyz it=qe.front(); qe.pop();
        if(it.x==E.x&&it.y==E.y&&it.z==E.z)
        {
            cout<<dp[it.x][it.y][it.z]<<endl;
            return;
        }
        for(int i=0;i<6;i++)
        {
            int x=it.x+dx[i];
            int y=it.y+dy[i];
            int z=it.z+dz[i];
            if(check(x,y,z))
            {
            dp[x][y][z]=dp[it.x][it.y][it.z]+1;
            qe.push({x,y,z});
            }
        }
    }
    cout<<"-1\n";
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m>>u;
        memset(dp,0,sizeof dp);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               for(int k=0;k<u;k++)
               {
                cin>>a[i][j][k];
                if(a[i][j][k]=='S') S={i,j,k};
                if(a[i][j][k]=='E') E={i,j,k};
               }
            }
        }
        BFS();
    }
}