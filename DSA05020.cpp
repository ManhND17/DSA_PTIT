#include<bits/stdc++.h>
using namespace std;
int n,m;
int check(int x,int y)
{
    if(x>=0&&x<n&&y>=0&&y<m) return 1;
    return 0;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][m];
        queue<pair<int,int>> qe;
        qe.push({0,0});
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
        long long ans=1e9;
        long long f[n][m];
        memset(f,0,sizeof f);
        while(qe.size())
        {
            pair<int,int> k=qe.front(); qe.pop();
            int x=k.first; int y=k.second;
            if(x==n-1&&y==m-1)
            {
                ans=min(ans,f[n-1][m-1]);
            }
            if(check(x,y+1))
            {
                if(!f[x][y+1]) qe.push({x,y+1});
                if(!f[x][y+1]||f[x][y+1]>f[x][y]+a[x][y+1])
                {
                    f[x][y+1]=f[x][y]+a[x][y+1];
                }
            }
            if(check(x+1,y))
            {
                if(!f[x+1][y])  qe.push({x+1,y});
                if(!f[x+1][y]||f[x+1][y]>f[x][y]+a[x+1][y]) 
                { 
                    f[x+1][y]=f[x][y]+a[x+1][y];
                }
            }
           
            if(check(x+1,y+1))
            {
                if(!f[x+1][y+1]) qe.push({x+1,y+1});
                if(!f[x+1][y+1]||f[x+1][y+1]>f[x][y]+a[x+1][y+1]) 
                { 
                    f[x+1][y+1]=f[x][y]+a[x+1][y+1];
                } 
            }
        }
        cout<<ans+a[0][0]<<endl;
    }
}