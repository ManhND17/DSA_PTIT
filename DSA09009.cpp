#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
void BFS(int u)
{
    queue<int> qe;
    chuaxet[u]=false;
    qe.push(u);
    while(qe.size())
    {
        int k=qe.front();
        qe.pop();
        for(auto x:v[k])
        {
            if(chuaxet[x])
            {
                chuaxet[x]=false;
                qe.push(x);
            }
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<1001;i++) v[i].clear();
        while(m--)
        {
            int u,y; cin>>u>>y;
            v[u].push_back(y);
            v[y].push_back(u);
        }
        int dem=0;
        for(int i=1;i<=n;i++)
        {
            if(chuaxet[i]){
                dem++;
                BFS(i);
            }
        }
        cout<<dem<<endl;
    }
}