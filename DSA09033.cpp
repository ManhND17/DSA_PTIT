#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
       cin>>n>>m;
       vector<int> v[n+1];
       for(int i=0;i<m;i++)
       {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
       }
       bool check=true;
       for(int i=1;i<=n&&check;i++)
       {
        for(auto x:v[i])
        {
            if(v[x].size()!=v[i].size())
            {
                check=false;
                break;
            }
        }
       }
       if(check) cout<<"YES\n";
       else cout<<"NO\n";
    }
}