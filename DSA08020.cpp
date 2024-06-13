#include<bits/stdc++.h>
using namespace std;
int d[100005],a[100005],ok[100005];
vector<int> nt;
vector<int> ke[100005];
void Sang()
{
    for(int i=2;i<=103;i++)
    {
        if(!a[i])
        {
            for(int j=i*i;j<=9999;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=1000;i<10000;i++)
    {
        if(!a[i]) nt.push_back(i);
    }
}
int check(int x,int y)
{
    int dem=0;
    while(x&&y)
    {
        if(x%10!=y%10) dem++;
        x/=10; y/=10;
    }
    if(dem==1) return 1;
    return 0;
}
void Init()
{
    for(int i=0;i<nt.size()-1;i++)
    {
        for(int j=i+1;j<nt.size();j++)
        {
            if(check(nt[i],nt[j])) 
            {
                ke[nt[i]].push_back(nt[j]);
                ke[nt[j]].push_back(nt[i]);
            }
        }
    }
}
void BFS(int x,int y)
{
    queue<int> qe;
    qe.push(x);
    ok[x]=1;
    while(qe.size())
    {
        int k=qe.front(); qe.pop();
        if(k==y)
        {
            cout<<d[k]<<endl;
            break;
        }
        for(auto v:ke[k])
        {
            if(!ok[v]) 
            {
            ok[v]=1;
            qe.push(v);
            d[v]=d[k]+1;
            }
        }
    }
}
main()
{
    int t; cin>>t; Sang(); Init();
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        memset(ok,0,sizeof ok);
        memset(d,0,sizeof d);
        BFS(x,y);
    }
}