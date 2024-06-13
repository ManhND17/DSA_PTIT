#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n]; map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int max=0,s;
        for(auto x : mp)
        {
            if(x.second>max) max=x.second,s=x.first;
        }
        if(max>n/2) cout<<s<<endl;
        else cout<<"NO\n";
    }
}