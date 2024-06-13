#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
/*
Y tuong xay dung cac co so i chu so bang cac co so i-1 chu so
so cac so kt bang digit+=so cac so kt bang x<=digit
*/
main()
{
    int t; cin>>t;
    vector<long long> last(10,1);
    long long f[101];
    memset(f,0,sizeof f);
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
            (f[i]+=sum)%=mod;//sum la cac so co chu so cuoi cung nho hon digit
        }
        (f[i]+=f[i-1])%=mod;//them so 0 truoc cac so
    }
    while(t--)
    {
        int n; cin>>n;
        cout<<f[n]<<endl;
    }
}