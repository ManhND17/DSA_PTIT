#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long n; cin>>n;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long x=0;
        for(int i=0;i<n;i++)
        {
          x+=a[i]*i;
          x%=mod;
        }
        cout<<x<<endl;
    }
}