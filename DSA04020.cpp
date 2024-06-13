#include<bits/stdc++.h>
using namespace std;
int find(int a[],int l,int r,int k)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==k) return m;
        else if(a[m]>k) r--;
        else l++;
    }
    return -1;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
    int n,k; cin>>n>>k; 
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(find(a,0,n-1,k)!=-1) cout<<find(a,0,n-1,k)+1<<endl;
    else cout<<"NO\n";
    }
}