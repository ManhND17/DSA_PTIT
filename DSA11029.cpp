#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
int truoc[1001];
void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    chuaxet[u]=false;
    while(qe.size())
    {
        int k=qe.front(); qe.pop();
        for(auto x:v[k])
        {
            if(chuaxet[x])
            {
                truoc[x]=k;
                qe.push(x);
                chuaxet[x]=false;
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
        for(int i=0;i<1001;i++) v[i].clear();
        map<int,int> mp;
        memset(chuaxet,true,sizeof chuaxet);
        memset(truoc,0,sizeof(truoc));
        for(int i=1;i<n;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            mp[x]++;
        }
        BFS(1);
        for(int i=1;i<=n;i++)
        {
            if(!mp[i]&&truoc[i])
            {
              int s=i; string res="";
              while(truoc[s])
              {
                res=to_string(truoc[s])+" "+res;
                s=truoc[s];
              }
              res+=to_string(i);
              cout<<res<<endl;
            }
        }
    }
}