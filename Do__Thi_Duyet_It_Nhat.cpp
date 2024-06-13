#include<bits/stdc++.h>
using namespace std;
int n,m; 
vector<int,int> v[1001];
bool chuaxet[1001];
void DFS(int u)
{
    chuaxet[u]=false;
    for(auto x:v[u])
    {
        if(chuaxet[x])
        {
            DFS(x);
        }
    }
}    
main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        
    }
}