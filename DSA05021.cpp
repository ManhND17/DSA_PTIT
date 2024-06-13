#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++)
        {
          cin>>a[i].first>>a[i].second;
        }
        sort(a,a+n);
        int f[n];
        memset(f,0,sizeof f);
        f[0]=1;
        int res=1;
        for(int i=1;i<n;i++)
        {
            f[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[j].second<a[i].first)
                {
                    f[i]=max(f[j]+1,f[i]);
                }
            }
            res=max(res,f[i]);
        }
        cout<<res<<endl;
    }
}