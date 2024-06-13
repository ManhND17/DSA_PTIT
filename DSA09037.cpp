#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> edge[10001];
bool chuaxet[10001];
map<int,int> mp;
void DFS(int s)
{
    chuaxet[s]=true;
    mp[s]++;
    for(auto x:edge[s])
    {
        if(!chuaxet[x]) DFS(x);
    }
}
main()
{
    int k,n,m; cin>>k>>n>>m;
    v.resize(n);
    for(int i=0;i<10001;i++) edge[i].clear();
    memset(chuaxet,false,sizeof chuaxet);
    for(int i=0;i<k;i++) cin>>v[i];
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        edge[x].push_back(y);
    }
    for(int i=0;i<k;i++)
    {
        DFS(v[i]);
        memset(chuaxet,false,sizeof chuaxet);
    }
    int cnt=0;
    for(int i=0;i<=n;i++)
    {
        if(mp[i]==k) cnt++;
    }
    cout<<cnt<<endl;
}