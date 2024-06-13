#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int> v(n,-1);
        stack<int> l;
        for(int i=0;i<n;i++)
        {
            while(l.size()&&mp[a[l.top()]]<mp[a[i]])
            {
                v[l.top()]=a[i];
                l.pop();
            }
            l.push(i);
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}