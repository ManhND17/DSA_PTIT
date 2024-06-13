#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[1005][1005];
        a[1][0]=1;
        a[1][1]=1;
        for(int i=2;i<=n;i++)
        {
          for(int j=0;j<=i;j++)
          {
            if(j==0||j==i) a[i][j]=1;
            else a[i][j]=(a[i-1][j-1]+a[i-1][j])%mod;
          }
        }
        cout<<a[n][k]<<endl;
    }
}