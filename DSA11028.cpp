#include<bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool chuaxet[100001];
int ans=0;
void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    chuaxet[u]=false;
    int f[100001]={0};
    while(qe.size())
    {
        int k=qe.front(); qe.pop();
        for(auto x:v[k])
        {
            if(chuaxet[x]) 
            {
                qe.push(x);
                f[x]=f[k]+1;
                chuaxet[x]=false;
                ans=max(ans,f[x]);
            }
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<100001;i++) v[i].clear();
        for(int i=1;i<n;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        ans=0;
        memset(chuaxet,true,sizeof chuaxet);
        BFS(1);
        cout<<ans<<endl;
    }
}