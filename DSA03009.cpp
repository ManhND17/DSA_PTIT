#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {   
        int n; cin>>n;
        vector<pair<int,int>> v(n+1);
        for(int i=1;i<=n;i++)
        {
           int x; cin>>x;
           cin>>v[i].second>>v[i].first;
        }
        int sum=0,dem=0;
        int check[n+1]={};
        sort(v.begin()+1,v.end(),greater<pair<int,int>>());
        for(int i=1;i<=n;i++)
        {
            for(int j=min(n,v[i].second);j>=1;j--)
            {
                if(!check[j])
                {
                    sum+=v[i].first;
                    dem++;
                    check[j]=1;
                    break;
                }
            }
        }
        cout<<dem<<" "<<sum<<endl;
    }
}