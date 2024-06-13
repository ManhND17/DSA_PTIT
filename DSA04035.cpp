#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
long long prod(long long a,long long b)
{
    long long c=1;
    while(b)
    {
        if(b%2)
        {
            c*=a;
            c%=mod;
        }
        a*=a; a%=mod;
        b/=2;
    }
    return c;
}
main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        cout<<prod(a,b)<<endl;
    }
}