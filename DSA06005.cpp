#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int a[n],b[m];
       map<int,int> mp,s;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
            s[a[i]]=1;
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
            mp[b[j]]++;
            if(s[b[j]]==1) s[b[j]]=2;
        }
        for(auto x : mp)
        {
            cout<<x.first<<" ";
        }
        cout<<endl;
        for(auto x : s)
        {
            if(x.second==2) cout<<x.first<<" ";
        }
        cout<<endl;
    }
}