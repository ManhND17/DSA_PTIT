#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int n,m;
bool check;
bool visited[1001];
void Hamilton(int s,int cnt)
{
    if(check) return;
    if(cnt==n){
        check=true;
        return;
    }
    for(int x:v[s])
    {
        if(!visited[x])
        {
            visited[x]=true;
            Hamilton(x,cnt+1);
            visited[x]=false;
        }
    }

}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(visited,false,sizeof visited);
        for(int i=0;i<1001;i++) v[i].clear();
        for(int i=0;i<m;i++)
        {
           int x,y; cin>>x>>y;
           v[x].push_back(y);
           v[y].push_back(x);
        }
        check=false;
        for(int i=1;i<=n&&!check;i++)
        {
            memset(visited,false,sizeof visited);
            visited[i]=true;
            Hamilton(i,1);
        }
        if(check) cout<<"1\n";
        else cout<<"0\n";
    }
}