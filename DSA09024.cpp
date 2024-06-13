#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1001];
vector<int> v[1001];
void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    chuaxet[u]=false;
    while(qe.size())
    {
        int k=qe.front(); qe.pop();
        for(int x:v[k])
        {
            if(chuaxet[x])
            {
                qe.push(x);
                chuaxet[x]=false;
            }
        }
        cout<<k<<" ";
    }
}
main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,m,u;
    cin>>n>>m>>u;
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<1001;i++) v[i].clear();
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
    }
    BFS(u);
    cout<<endl;
  }
}