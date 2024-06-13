#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
int truoc[1001];
void BFS(int u)
{
    chuaxet[u]=false;
    queue<int> st;
    st.push(u);
    while(st.size())
    {
        int k=st.front(); st.pop();
        for(auto x:v[k])
        {
            if(chuaxet[x])
            {
                chuaxet[x]=false;
                st.push(x);
                truoc[x]=k;
            }   
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,u,s; cin>>n>>m>>u>>s;
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,0,sizeof(truoc));
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        BFS(u);
        if(truoc[s]==0) cout<<"-1\n";
        else {
        stack<int> st;
      st.push(s);
      int h=truoc[s];
      while(h!=u)
      {
        st.push(h);
        h=truoc[h];
      }
      cout<<u<<" ";
      while(st.size())
      {
        cout<<st.top()<<" ";
        st.pop();
      }
      cout<<endl;

        }
    }
}