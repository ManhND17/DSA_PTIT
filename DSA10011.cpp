#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int n,m;
int a[505][505];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
map<pii,int> mp;
class Compare{
    public:
    bool operator()(pair<pii,int> a,pair<pii,int> b)
    {
        return a.second>b.second;
    }
};
void Dijkstra()
{
    priority_queue<pair<pii,int>,vector<pair<pii,int>>,Compare> q;
    q.push({{1,1},a[1][1]});
    mp[{1,1}]=1;
    while(q.size())
    {
        pair<pii,int> k=q.top(); q.pop();
        if(k.first.first==n&&k.first.second==m)
        {
            cout<<k.second<<endl;
            break;
        }
        for(int i=0;i<4;i++)
        {
            int x=k.first.first+dx[i];
            int y=k.first.second+dy[i];
            if(x>=1&&x<=n&&y>=1&&y<=m&&!mp[{x,y}])
            {
                mp[{x,y}]=1;
                q.push({{x,y},k.second+a[x][y]});
            }
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        Dijkstra();
    }
}