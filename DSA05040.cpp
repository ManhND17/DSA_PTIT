#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int inc[n];
        int dec[n];
        memset(inc,0,sizeof 0);
        memset(dec,0,sizeof 0);
        inc[0]=0;
        dec[n-1]=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                inc[i]=inc[i-1]+1;
            }
            else inc[i]=0;
        }
        for(int i=n-2;i>=0;i--)
        {
           if(a[i]>a[i+1])
           {
            dec[i]=dec[i+1]+1;
           }
           else dec[i]=0;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
           ans=max(ans,inc[i]+dec[i]+1);
        }
        cout<<ans<<endl;
    }
}