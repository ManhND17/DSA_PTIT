#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1],dp[n+1]={0};
        a[n]=10000000;
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]<=a[j]&&dp[j]+1>dp[i])
                dp[i]=dp[j]+1;
            }
            res=max(res,dp[i]);
        }
        cout<<n-res<<endl;
    }
}