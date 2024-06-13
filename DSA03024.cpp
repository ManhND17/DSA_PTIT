#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int a,b; cin>>a>>b;
            v.push_back({b,a});
        }
        sort(v.begin(),v.end());
        int dem=1;
        int last=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(v[i].second>=last)
            {
                last=v[i].first;
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}