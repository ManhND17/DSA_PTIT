#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        long long f[100001]={0};
        f[1]=1;
        f[0]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=i-k;j<=i-1;j++)
            {
             if(j>=0){
                f[i]=(f[i]+f[j])%mod;
             }
            }
        }
        cout<<f[n]<<endl;;
    }
}