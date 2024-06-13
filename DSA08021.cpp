#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
bool check(int x,int y)
{
    if(x>=0&&x<n&&y>=0&&y<m) return true;
    return false;
}
struct Oxy{
    int x,y;
};
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               cin>>a[i][j];
            }
        }
        queue<Oxy> qe;
        qe.push({0,0});
        int res=-1;
        int d[n][m];
        memset(d,0,sizeof d);
        while(qe.size())
        {
            Oxy s=qe.front(); qe.pop();
            int x=s.x;
            int y=s.y;
            if(x==n-1&&y==m-1)
            {
                res=d[x][y];
                break;
            }
            if(check(x+a[x][y],y)&&!d[x+a[x][y]][y])
            {
                d[x+a[x][y]][y]=d[x][y]+1;
                qe.push({x+a[x][y],y});
            }
            if(check(x,y+a[x][y])&&!d[x][y+a[x][y]])
            {
                d[x][y+a[x][y]]=d[x][y]+1;
                qe.push({x,y+a[x][y]});
            }
        }
        cout<<res<<endl;
    }
}