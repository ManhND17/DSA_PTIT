#include<bits/stdc++.h>
using namespace std;
long long kt(long long a,long long b)
{
    if(b==0) return 1;
    if(b==1) return a;
    long long tmp=kt(a,b/2);
    if(b%2==0) return tmp*tmp;
    else return tmp*tmp*a;
}
char lt(int n,long long k)
{
    long long x=kt(2,n-1);
    if(k==x) return n+'A'-1;
    else if(k<x) return(n-1,k);
    return(n-1,k-x);
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; long long k;
        cin>>n>>k;
        cout<<lt(n,k)<<endl;
    }
}