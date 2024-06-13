#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,k; cin>>n>>k;
        map<long long,int> mp;
        vector<long> v(n);
        cin>>v[0];
        mp[v[0]]=1;
        mp[0]=1; 
        bool check=false;
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
            v[i]+=v[i-1];
            if(mp[v[i]-k]) check=true;
            mp[v[i]]=1;
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}