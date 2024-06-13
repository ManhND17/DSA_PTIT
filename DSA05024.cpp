#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long f[k+1];
        memset(f,0,sizeof f);
        f[0]=1;
        long mod=1e9+7;
        for(int j=1;j<=k;j++)
        {
            for(int i=0;i<n;i++)
            {
              if(j-a[i]>=0) f[j]+=f[j-a[i]];
              f[j]%=mod;
            }
        }
        cout<<f[k]<<endl;
    }
}