#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<int> v[1001];
        while(m--)
        {
         int x,y; cin>>x>>y;
         v[x].push_back(y);
        }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<": ";
        for(int x:v[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    }
}