#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[16],b[16];
void in()
{
    for(int i=1;i<=k;i++)
    {
        cout<<b[a[i]-1]<<" ";
    }
    cout<<endl;
}
void Try(int i)
{
    for(int j=a[i-1]+1;j<=n;j++)
    {
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int  i=0;i<n;i++) cin>>b[i];
        sort(b,b+n);
        memset(a,0,sizeof(a));
        Try(1);
    }
}