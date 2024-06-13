#include<bits/stdc++.h>
using namespace std;
const int Max=20;
int dp[Max][1<<Max];
int a[20][20];
int n;
int Solve(int i,int mask)
{
    if(i==n) return 0;
    if(dp[i][mask]!=-1) return dp[i][mask];
    int ans=0;
    for(int j=0;j<n;j++)
    {
        if((mask>>j)&1) continue;
        ans=max(ans,a[i][j]+Solve(i+1,mask|(1<<j)));
    }
    return dp[i][mask]=ans;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        memset(dp,-1,sizeof dp);
        cout<<Solve(0,0)<<endl;
    }
}