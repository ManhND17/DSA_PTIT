#include<bits/stdc++.h>
using namespace std;
priority_queue<long long,vector<long long>,greater<long long>> q;
vector<long long> v;
map<long long,int> mp;
void check(long long x)
{
    if(!mp[x])
    {
      q.push(x);
      mp[x]=1;
    }
}
main()
{
    int t; cin>>t;
    q.push(1);
    while(v.size()<1e4)
    {
        long long k=q.top(); q.pop();
        v.push_back(k);
        check(k*2);
        check(k*3);
        check(k*5);
    }
    while(t--)
    {
        int n; cin>>n;
        cout<<v[n-1]<<endl;
    }
}