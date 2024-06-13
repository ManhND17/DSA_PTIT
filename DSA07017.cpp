#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> greater(n,-1);
        vector<int> lower(n,-1);
        stack<int> g,h;
        for(int i=0;i<n;i++)
        {
            while(!g.empty()&&v[g.top()]<v[i])
            {
               greater[g.top()]=i;
               g.pop();
            }
            while(!h.empty()&&v[h.top()]>v[i])
            {
              lower[h.top()]=i;
              h.pop();
            }
            g.push(i);
            h.push(i);
        }
        for(int i=0;i<n;i++)
        {
            if(greater[i]!=-1&&lower[greater[i]]!=-1)
            {
                cout<<v[lower[greater[i]]]<<" ";
            }
            else cout<<"-1 ";
        }
        cout<<endl;
    }
}