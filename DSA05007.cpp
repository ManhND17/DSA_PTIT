#include<bits/stdc++.h>
using namespace std;
main()
{
       int t; cin>>t;
       while(t--)
       {
        int n; cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<long long> dp(n);
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+a[i]);
        }
        cout<<dp[n-1]<<endl;
       }
}