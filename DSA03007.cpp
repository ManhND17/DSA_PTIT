#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long n; cin>>n;
        long long a[n],b[n];
        for(long i=0;i<n;i++) cin>>a[i];
        for(long i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        long long x=0;
        for(int i=0;i<n;i++)
        {
         x+=a[i]*b[n-1-i];
        }
        cout<<x<<endl;
    }
}