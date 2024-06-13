#include<bits/stdc++.h>
using namespace std;
double distance(pair<double,double> a,pair<double,double> b)
{
    return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<pair<double,double>> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
            b[i].first=a[i].second;
            b[i].second=a[i].first;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        double ans=1e9;
        for(int i=1;i<n;i++)
        {
           ans=min(ans,distance(a[i],a[i-1]));
           ans=min(ans,distance(b[i],b[i-1]));
        }
        cout<<setprecision(6)<<fixed<<ans<<endl;
    }
}