#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        long long mod=1e9+7;
        vector<long long> last(10,1);
        long long f[101][50001];
        memset(f,0,sizeof f);
        for(int i=0;i<=9;i++) f[1][i]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                for(int x=0;x<=9;x++)
                {
                   if(j>x){
                    (f[i][j]+=f[i-1][j-x])%=mod;
                   } 
                }
            }
        }
        cout<<f[n][k]<<endl;
    }
}