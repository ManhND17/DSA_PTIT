#include<bits/stdc++.h>
using namespace std;
void MERGE_SORT(int a[],int l,int r)
{
    if(l,r)
    {
    int m=(l+r-1)/2;
    MERGE_SORT(a,l,m);
    MERGE_SORT(a,m+1,r);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}