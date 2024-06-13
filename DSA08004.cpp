#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int k,x;
        string s;
        cin>>k>>s;
        long long ans=0;
        map<char,int> mp;
        priority_queue<int> q;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        for(auto i:mp) q.push(i.second);
        while(k--)
        {
            x=q.top();
            q.pop();
            q.push(x-1);
        }
        while(q.size())
        {
          ans+=(long long)q.top()*q.top();
          q.pop();
        }
        cout<<ans<<endl;
    }
}