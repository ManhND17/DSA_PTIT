#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,s; cin>>n>>s;
        int a[n];
        int sum[s+1]={0};
        sum[0]=1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=s;j>=a[i];j--)
            {
                if(sum[j-a[i]]) sum[j]=1;
            }
     
        }
        if(sum[s]) cout<<"YES\n";
        else cout<<"NO\n";
    }

}