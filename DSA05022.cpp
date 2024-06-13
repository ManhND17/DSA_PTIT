#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,x,y,z; cin>>n>>x>>y>>z;
        int f[101];
        memset(f,0,sizeof 0);
        f[1]=x;
        for(int i=2;i<=n;i++)
        {
            f[i]=f[i-1]+x;
            if(i%2==1)
            {
              f[i]=min(f[i],f[(i+1)/2]+y+z);
            }
            else f[i]=min(f[i],f[i/2]+z);
        }
        cout<<f[n]<<endl;
    }
}