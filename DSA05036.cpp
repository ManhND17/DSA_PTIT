#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        double a[n], b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        long long f[501];
        memset(f,0,sizeof f);
        f[0]=1;
        long long res=1;
        for(int i=1;i<n;i++)
        {
            f[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i]&&b[j]>b[i]&&f[j]+1>f[i]) f[i]=f[j]+1;
            }
            res=max(res,f[i]);
        }
        cout<<res<<endl;
    }
}