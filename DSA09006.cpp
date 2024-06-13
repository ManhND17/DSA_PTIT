#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
bool chuaxet[1001];
int truoc[1001];
void DFS(int u)
{
    chuaxet[u]=false;
    stack<int> st;
    st.push(u);
    while(st.size())
    {
        int k=st.top(); st.pop();
        for(auto x:v[k])
        {
            int ok=0;
            if(chuaxet[x])
            {
                chuaxet[x]=false;
                st.push(k);
                st.push(x);
                truoc[x]=k;
                ok=1;
            }
            if(ok==1) break;   
        }
        cout<<endl;
    }
}
void BFS(int u)
{
    queue<int> qe;
    chuaxet[u]=false;
    
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,0,sizeof(truoc));
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        DFS(1);
        vector<string> v1;
        for(int i=2;i<=n;i++)
        {
        int s=i;
        if(truoc[s]==0) cout<<"-1\n";
        else {
        stack<int> st;
        st.push(s);
        int h=truoc[s];
        while(h!=1)
        {
        st.push(h);
        h=truoc[h];
        }
        string res="1";
        while(st.size())
        {
        res+=st.top();
        st.pop();
        }
        v1.push_back(res);
        }
      }
    }
}