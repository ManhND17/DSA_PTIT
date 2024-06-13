#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n],b[n],ok=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]&&a[i]!=b[n-i-1])
            {
                ok=0;
                break;
            }
        }
        if(ok) cout<<"Yes\n";
        else cout<<"No\n";
    }
}