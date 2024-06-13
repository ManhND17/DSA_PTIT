#include<bits/stdc++.h>
using namespace std;
int a[501][501];
int fx[8]={-1,-1,-1,0,0,1,1,1};
int fy[8]={-1,0,1,-1,1,-1,0,1};
int n,m;
bool check(int a1,int b)
{
    if(a1>0&&a1<=n&&b>0&&b<=m&&a[a1][b]==1) return true;
    return false;
}
void DFS(int x,int y)
{
   a[x][y]=0;
   for(int i=0;i<8;i++)
   {
    int X=x+fx[i];
    int Y=y+fy[i];
    if(check(X,Y)){
        DFS(X,Y);
    }
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==1)
                {
                    DFS(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}