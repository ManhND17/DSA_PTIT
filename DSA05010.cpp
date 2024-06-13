#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            v[i]%=k;
        }
        int f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<k;j++) f[i][j]=INT_MIN;
        }
        f[1][v[1]]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<k;j++)
            {
               f[i][j]=max(f[i-1][j],f[i-1][(j-v[i]+k)%k]+1);
            }
        }
        cout<<f[n][0]<<endl;
    }
}
