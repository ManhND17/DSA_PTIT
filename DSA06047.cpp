#include<bits/stdc++.h>
using namespace std;
int check(long long b[],int n)
{
    for(int i=n-1;i>1;i--)
    {
        int l=0,r=i-1;
        while(l<r)
        {
            if(b[l]+b[r]==b[i]) return 1;
            else if(b[l]+b[r]>b[i]) r--;
            else l++;
        }
    }
    return 0;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long b[n];
        for(int i=0;i<n;i++)
        {
            b[i]=a[i]*a[i];
        }
         if(check(b,n)) cout<<"YES\n";
         else cout<<"NO\n";
    }
}