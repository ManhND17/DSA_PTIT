#include<bits/stdc++.h>
using namespace std;
int n;
char v[101][101];
char L[4]={'D','R','L','U'};
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
int visit[1001][1001];
int cmp(int a,int b)
{
    if(a>=0&&a<n&&b>=0&&b<n) return 1;
    return 0;
}
int ans=1e9;
void BFS(int x,int y,int a,int b)
{
    queue<pair<pair<pair<int,int>,char>,int>> qe;
    qe.push({{{x,y},'G'},0});
    while(qe.size())
    {
        pair<pair<pair<int,int>,char>,int> k=qe.front();
        qe.pop();
        int x2=k.first.first.first;
        int y2=k.first.first.second;
        if(x2==a&&y2==b)
        {
            ans=min(ans,k.second);
        }
        
        for(int i=0;i<4;i++)
        {
            int x1=x2+dx[i];
            int y1=y2+dy[i];
            if(cmp(x1,y1)&&v[x1][y1]=='.'&&!visit[x1][y1])
            {
                visit[x1][y1]=1;
                if(L[i]!=k.first.second) qe.push({{{x1,y1},L[i]},k.second+1});
                else qe.push({{{x1,y1},L[i]},k.second});
            }
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n; cin.ignore();
        int x,y,a,b;
        for(int i=0;i<n;i++)
        {
            string s; getline(cin,s);
            for(int j=0;j<n;j++)
            {
                v[i][j]=s[j];
            }
        }
        cin>>x>>y>>a>>b;
        memset(visit,0,sizeof visit);
        ans=1e9;
        BFS(x,y,a,b);
        cout<<ans<<endl;
    }
}