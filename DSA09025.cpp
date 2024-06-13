#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1001];
vector<int> v[1001];
int truoc[1001];
void Trace_DFS(int s)
{
  stack<int> st;
  st.push(s);
  chuaxet[s]=false;
  while(st.size())
  {
    int k=st.top();
    st.pop();
    for(auto u:v[k])
    {
      int ok=1;
      if(chuaxet[u])
      {
        chuaxet[u]=false;
        st.push(k);
        st.push(u);
        truoc[u]=k;
        ok=0;
      }
      if(ok==0) break;
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
    for(int i=0;i<1001;i++)
    {
      v[i].clear();
      truoc[i]=0;
    }
    for(int i=1;i<=m;i++)
    {
      int x,y; cin>>x>>y;
      v[x].push_back(y);
    }
    Trace_DFS(u);
    if(truoc[s]==0) cout<<"-1"<<endl;
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