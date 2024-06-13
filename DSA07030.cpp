#include<bits/stdc++.h>
using namespace std;
int a[501];
int ans=0;
void HCN0_1(int n)
{
    stack<int> l;
    stack<int> r;
    int left[n];
    int right[n];
    l.push(0);
    r.push(n-1);
    for(int i=0;i<n;i++)
    {
        while(l.size()&&a[l.top()]>=a[i])
        {
            l.pop();
        }
        if(l.empty()) left[i]=0;
        else left[i]=l.top()+1;
        l.push(i); 
    }
    for(int i=n-1;i>=0;i--)
    {
        while(r.size()&&a[r.top()]>=a[i])
        {
            r.pop();
        }
        if(r.empty()) right[i]=n-1;
        else right[i]=r.top()-1;
        r.push(i);
    }
    for(int i=0;i<n;i++)
    {
     ans=max(ans,((right[i]-left[i]+1)*a[i]));
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ans=0;
        memset(a,0,sizeof a);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x; cin>>x;
                if(x==0) a[j]=0;
                else a[j]+=x;
            }
            HCN0_1(m);
        }
        cout<<ans<<endl;
    }
}