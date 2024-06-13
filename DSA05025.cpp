#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long long f[52]={0};
        f[0]=1;
        f[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=i-3;j<=i-1;j++)
            {
             if(j>=0)
             {
                f[i]=f[i]+f[j];
             }
            }
        }
        cout<<f[n]<<endl;
    }
}