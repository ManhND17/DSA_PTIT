#include<bits/stdc++.h>
using namespace std;
int n,a[101],x[101];
vector<string> s;
vector<int> v;
int check()
{
    v.clear();
    for(int i=1;i<=n;i++)
    {
        if(a[i]) v.push_back(x[i-1]);
    }
    if(v.size()<2) return 0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1]) return 0;
    }
    return 1;
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) {
            if(check()) {
                string ss="";
                for(int i=0;i<v.size();i++)
                {
                    ss+=to_string(v[i])+" ";
                }
                s.push_back(ss);
            }
        }
        else Try(i+1);
    }
}
main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];

    }
    Try(1);
    sort(s.begin(),s.end());
    for(auto x : s)
    {
        for(auto i : x)
        {
            cout<<i;
        }
        cout<<endl;
    }
}