#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long n; cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long cnt=0;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>=a[i-1]) cnt++;
            if(a[i]<a[i-1]) break;
        }
        cout<<n-cnt-1<<endl;
    }
}