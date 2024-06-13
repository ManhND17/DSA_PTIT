#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v1;
vector<int> v[1001];
bool chuaxet[1001];
void TreeBFS(int u)
{
    queue<int> qe;
    chuaxet[u]=true;
    qe.push(u);
    while(qe.size())
    {
        int k=qe.front();
        qe.pop();
        for(auto x:v[k])
        {
            if(!chuaxet[x]) {
            v1.push_back({k,x});
            qe.push(x);
            chuaxet[x]=true;
            }
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,u; cin>>n>>m>>u;
        memset(chuaxet,false,sizeof chuaxet);
        for(int i=0;i<1001;i++) v[i].clear();
        v1.clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        TreeBFS(u);
        bool check=false;
        for(int i=1;i<=n&&!check;i++)
        {
        if(!chuaxet[i]) check=true;
        }
        if(check) cout<<"-1\n";
        else{
        for(auto x:v1)
         {
            cout<<x.first<<" "<<x.second<<endl;
         }
    }
    }
}