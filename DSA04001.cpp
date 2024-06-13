#include<bits/stdc++.h>
using namespace std;
long m=1e9+7;
long long powMOD(int n,long k)
{
    if(k==0) return 1;
    long long x=powMOD(n,k/2);
    if(k%2==0) return x*x%m;
    else return n*(x*x%m)%m;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        long k; cin>>n>>k;
        cout<<powMOD(n,k)<<endl;
    }
}