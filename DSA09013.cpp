#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> List[1001];
bool chuaxet[1001];
void DFS(int s)
{
    chuaxet[s]=true;
    for(auto x:List[s])
    {
        if(!chuaxet[x]) DFS(x);
    }
}
void Canhcau()
{
    int i,j,k,u;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<List[i].size();j++)
        {
            u=List[i][j];
            List[i].erase(List[i].begin()+j);
            DFS(i);
            bool check=false;
            for(int k=1;k<=n;k++)
            {
                if(!chuaxet[k]) check=true;
            }
            if(check&&i<u) cout<<i<<" "<<u<<" ";
            List[i].insert(List[i].begin()+j,u);
            memset(chuaxet,false,sizeof chuaxet);
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<1001;i++){
            List[i].clear();
        }
        memset(chuaxet,false,sizeof(chuaxet));
        for(int i=0;i<m;i++)
        {
            int x,y; cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        for(int i=1;i<=n;i++) sort(List[i].begin(),List[i].end());
        Canhcau();
        cout<<endl;
    }
}