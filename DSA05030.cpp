#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        long f[50][50];
        memset(f,0,sizeof f);
        f[n][m]=1;
        for(int i=n;i>=0;i--)
        {
            for(int j=m;j>=0;j--)
            {
                if(i==n&&j==m) continue;
                f[i][j]+=f[i+1][j]+f[i][j+1];
            }
        }
        cout<<f[0][0]<<endl;
    }
}