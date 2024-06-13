#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool chuaxet[1001];
void DFS(int s,int i)
{
    chuaxet[s]=true;
    for(int x:v[s])
    {
        if(!chuaxet[x]&&x!=i) DFS(x,i);
    }
}
void Dinhtru()
{
    for(int i=1;i<=n;i++)
    {
        if(i==1) {
            DFS(2,1);
        }
        else DFS(1,i);
        int ok=0;
        for(int k=1;k<=n;k++)
        {
            if(k!=i&&!chuaxet[k]){
               ok=1; break;
            }
          }
          if(ok) cout<<i<<" ";
          memset(chuaxet,false,sizeof chuaxet);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(chuaxet,false,sizeof chuaxet);
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        Dinhtru();
        cout<<endl;
    }
}