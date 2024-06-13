#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long long f[10001];
        memset(f,0,sizeof 0);
        for(int i=1;i<=n;i++) f[i]=i;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sqrt(i);j++)
            {
               if(i-j*j>=0) f[i]=min(f[i],f[i-j*j]+1);
            }
        }
        cout<<f[n]<<endl;
    }
}