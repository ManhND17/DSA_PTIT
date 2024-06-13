#include<bits/stdc++.h>
using namespace std;
int in_order[1001];
vector<int> level_order;
unordered_map<int,int> mp;
vector<int> P;
vector<int> filter(vector<int> level_order,int l,int r)
{
    vector<int> level;
    level.push_back(0);
    for(int i=0;i<level_order.size();i++)
    {
        for(int j=l;j<=r;j++)
        {
           if(level_order[i]==in_order[j])
           {
            level.push_back(level_order[i]);
            break;
           }
        }
    }
    return level;
}
void get_post_level(vector<int> level_order,int in_left,int in_right)
{
    int root=level_order[1];
    P.push_back(root);
    int l=mp[root]-in_left;
    int r=in_right-mp[root];
    if(r>0) get_post_level(filter(level_order,mp[root]+1,in_right),mp[root]+1,in_right);
    if(l>0) get_post_level(filter(level_order,in_left,mp[root]-1),in_left,mp[root]-1);
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        mp.clear();
        P.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>in_order[i];
            mp[in_order[i]]=i;
        }
        level_order.resize(n+1);
        level_order[0]=0;
        for(int i=1;i<=n;i++) cin>>level_order[i];
        get_post_level(level_order,1,n);
        for(int i=P.size()-1;i>=0;i--)
        {
            cout<<P[i]<<" ";
        }
        cout<<endl;
    }
}