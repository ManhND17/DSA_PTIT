#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,v; cin>>n>>v;
        vector<int> c(n+1);
        vector<int> b(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        long long f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
        {
         for(int j=1;j<=v;j++)
         {
          if(j>=c[i])
          {
            f[i][j]=max(f[i-1][j],f[i-1][j-c[i]]+b[i]);
          }
          else f[i][j]=f[i-1][j];
         }   
        }
        cout<<f[n][v]<<endl;
    }
}