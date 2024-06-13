#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[505][505];
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
int check(int x,int y)
{
    if(x>=0&&y>=0&&x<n&&y<m) return 1;
    return 0;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        queue<pair<int,int>> qe;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==2) qe.push({i,j});
            }
        }
        map<pair<int,int>,int> mp;
        while(qe.size())
        {
            pair<int,int> it=qe.front(); qe.pop();
            /*cout<<it.first<<" "<<it.second<<endl;*/
            for(int i=0;i<4;i++)
            {
                int x=it.first+dx[i];
                int y=it.second+dy[i];
                if(check(x,y)&&!mp[{x,y}]&&a[x][y]==1)
                {
                    a[x][y]=2;
                    mp[{x,y}]=mp[{it.first,it.second}]+1;
                    qe.push({x,y});
                }
            }
        }
        int ans=1; bool ok=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1){
                    ok=false;
                    break;
                }
                ans=max(ans,mp[{i,j}]);
            }
        }
        if(ok) cout<<ans<<endl;
        else cout<<"-1\n";
    }
}