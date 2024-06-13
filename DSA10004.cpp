#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        vector<int> v[1001];
        int n,m; cin>>n>>m;
        for(int i=0;i<m;i++)
        {
         int x,y; cin>>x>>y;
         v[x].push_back(y);
         v[y].push_back(x);
        }
        int dem=0;
        for(int i=1;i<=n;i++)
        {
          if(v[i].size()%2==0&&v[i].size()>0) dem++;
        }
        if(dem==n) cout<<"2\n";
        else if(dem==n-2) cout<<"1\n";
        else cout<<"0\n";
    }
}