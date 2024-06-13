#include<bits/stdc++.h>
using namespace std;
main()
{
    int n; cin>>n;
    int a[n],dp[n]={0};
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]<a[j])
           dp[j]=max(dp[j],dp[i]+1);
        }
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
       m=max(dp[i],m);
    }
    cout<<m+1<<endl;
}