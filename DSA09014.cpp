#include<bits/stdc++.h>
using namespace std;
vector<int> chuaxet;
int check;
vector<int> v[1001];
void DFS(int s)
{
    chuaxet[s]=1;
    for(auto x : v[s])
    {
      if(chuaxet[x]==0)
      {
        DFS(x);
      }
      else if(chuaxet[x]==1)
      {
        check=true;
      }
    }
    chuaxet[s]=2;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        for(int i=0;i<1001;i++) v[i].clear();
        chuaxet.clear();
        chuaxet.resize(n + 1, 0);
        while(m--)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        check=false;
        for(int i=1;i<=n&&!check;i++)
        {
            if(!chuaxet[i]) DFS(i);
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}