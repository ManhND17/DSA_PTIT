#include<bits/stdc++.h>
using namespace std;
int dem=INT_MAX;
int n,s;
long a[31];
bool check=false;
int res;
void Try(int s,int lim,int cnt)
{
    if(check) return;
    if(s<0) return;
    if(s==0)
    {
        check=1;
        res=cnt;
        return;
    }
    for(int j=lim;j>=0;j--)
    {
        Try(s-a[j],j-1,cnt+1);
    }
}
main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    Try(s,n-1,0);
    if(check)
    cout<<res<<endl;
    else cout<<"-1\n";
}