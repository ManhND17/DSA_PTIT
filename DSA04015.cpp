#include<bits/stdc++.h>
using namespace std;
int floor(long long a[],long l, long h,long long x)
{
    if(a[0]>x) return -1;
    long m=(l+h)/2;
    if(l==h) return l;
    if(a[m]<=x) floor(a,l,m,x);
    else floor(a,m,h,x);
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        long  n;
        long long x;
        cin>>n>>x;
        long long a[n];
        for(long i=0;i<n;i++) cin>>a[i];
        int pos=0,res=0;;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=x)
            {
              if(res<a[i])
              {
                res=a[i];
                pos=i+1;
              }
            }
        }
        if(!pos) cout<<"-1\n";
        else cout<<pos<<endl;
    }
}