#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<int> v[1001],v1[1001];
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v1[y].push_back(x);
        }
        int ok=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()!=v1[i].size()) {
                ok=1;
                break;
            }
        }
        if(ok) cout<<"0\n";
        else cout<<"1\n";
    }
}