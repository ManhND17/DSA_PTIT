#include<bits/stdc++.h>
using namespace std;
int n,m;
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            cin>>a[i][j];
        }
        int f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                f[i][j]=a[i][j];
                if(i==1&&j==1) continue;
                int tmp=1e9;
                if(i-1>0) tmp=min(tmp,f[i-1][j]);
                if(j-1>0) tmp=min(tmp,f[i][j-1]);
                if(i-1>0&&j-1>0) tmp=min(tmp,f[i-1][j-1]);
                f[i][j]+=tmp;
            }
        }
        cout<<f[n][m]<<endl;
    }
}