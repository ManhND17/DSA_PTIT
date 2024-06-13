#include<bits/stdc++.h>
using namespace std;
struct Item{
    int weight,value;
    double r;
};
bool cmp(Item a,Item b)
{
    return a.r>b.r;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        vector<Item> v(n);
        for(int i=0;i<n;i++)
        {
           cin>>v[i].value>>v[i].weight;
           v[i].r=1.0*v[i].value/v[i].weight;
        }
        sort(v.begin(),v.end(),cmp);
        int sum=0;
        int total_Value=0;
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(sum<w)
            {
                sum+=v[i].weight;
                total_Value+=v[i].value;
                idx=i;
            }
        }
        double res=total_Value;
        if(sum>w)
        {
            res=1.0*total_Value-1.0*(sum-w)*v[idx].r;
        }
        cout<<fixed<<setprecision(2)<<res<<endl;
    }
}