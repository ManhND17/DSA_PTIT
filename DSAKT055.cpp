#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,v; cin>>n>>v;
        int a[1001];
        int b[1001];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        long long f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=v;j++)
          {
            f[i][j]=f[i-1][j];
            if(j>=a[i]){
                f[i][j]=max(f[i][j],f[i-1][j-a[i]]+b[i]);
            }
          }
        }
        cout<<f[n][v]<<endl;
    }
}