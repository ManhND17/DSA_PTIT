#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
      int k ; cin>>k;
      string s;  cin>>s;
      map<char,int> mp;
      for(int i=0;i<s.size();i++)
      {
        mp[s[i]]++;
      }
      priority_queue<int> v;
      for(auto x:mp)
      {
        v.push(x.second);
      } 
      while(k--)
      {
        int tmp=v.top();
        v.pop();
        tmp--;
        v.push(tmp);
      }
      int ans=0;
      while(!v.empty())
      {
        int tmp=v.top();
        ans+=tmp*tmp;
        v.pop();
      }
      cout<<ans<<endl;
    }
}