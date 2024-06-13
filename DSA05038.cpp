#include<bits/stdc++.h>
using namespace std;
main()
{
 
    int n; cin>>n;
    long long f[100001];
    memset(f,0,sizeof f);
    vector<pair<long,long>> v(n);
    for(auto &x:v)
    {
        cin>>x.first>>x.second;
    }
    f[0]=1;
    long long res=1;
    for(int i=1;i<n;i++)
    {
        f[i]=1;
        for(int j=0;j<i;j++)
        {
            if(v[j].first<v[i].first&&v[j].second<v[i].second)
            {
                f[i]=max(f[j]+1,f[i]);
            }
        }
        res=max(f[i],res);
    }
    cout<<res<<endl;
}