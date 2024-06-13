#include<bits/stdc++.h>
using namespace std;
vector<int> v[200005];
long long Dinhduong[200005]={0};
long long tonghop[200005]={0};
void BFS(int s)
{
    for(auto x:v[s])
    {
        BFS(x);
        Dinhduong[s]+=Dinhduong[x];
        tonghop[s]+=tonghop[x]+1;
    }
    Dinhduong[s]+=tonghop[s];
}
main()
{
        int n; cin>>n;
        for(int i=1;i<=n;i++) Dinhduong[i]=1;
        for(int i=2;i<=n;i++)
        {
            int x; cin>>x;
            v[x].push_back(i);
        }
        BFS(1);
        for(int i=1;i<=n;i++) cout<<Dinhduong[i]<<" ";
}