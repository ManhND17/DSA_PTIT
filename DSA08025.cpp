#include<bits/stdc++.h>
using namespace std;
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={1,-1,2,-2,2,-2,1,-1};
bool check(int x,int y)
{
    if(x>=0&&x<8&&y>=0&&y<8) return true;
    return false;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;
        int d[9][9];
        memset(d,0,sizeof d);
        int m,n;
        m=s1[0]-'a'; n=s1[1]-'1';
        queue<pair<int,int>> qe;
        qe.push({m,n});
        m=s2[0]-'a'; n=s2[1]-'1';
        int res=-1;
        while(qe.size())
        {
            pair<int,int> s;
            s=qe.front(); qe.pop();
            int x=s.first; int y=s.second;
            if(x==m&&y==n)
            {
               res=d[x][y];
               break;
            }
            for(int i=0;i<8;i++)
            {
                int a=x+dx[i];
                int b=y+dy[i];
                if(check(a,b)&&!d[a][b]){
                    d[a][b]=d[x][y]+1;
                    qe.push({a,b});
                }
            }
        }
        cout<<res<<endl;
    }
}