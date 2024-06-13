#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[21];
int check()
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    if(s%k!=0||n<k) return 0;
    int sum[2001];
    sum[0]=1;
    for(int i=0;i<a[i];i++)
    {
        for(int j=s;j>=a[i];j--)
        {
            if(!sum[j]&&sum[j-a[i]]) sum[j]=1;
        }
    }
    return sum[s/k];
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        if(check()) cout<<1<<endl;
        else cout<<0<<endl;
    }
}