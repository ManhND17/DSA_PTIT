#include<bits/stdc++.h>
using namespace std;
main()
{
    long long f[101];
    memset(f,0,sizeof f);
    vector<long long> last(10,1);
    long mod=1e9+7;
    f[1]=10;
    for(int i=2;i<=100;i++)
    {
        for(int digit=9;digit>=1;digit--)
        {
            long long sum=0;
            for(int x=1;x<=digit;x++)
            {
                sum+=last[x];
            }
            last[digit]=sum;
            (f[i]+=sum)%=mod;
        }
        (f[i]+=f[i-1])%=mod;
    }
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<f[n]<<endl;
    }
}