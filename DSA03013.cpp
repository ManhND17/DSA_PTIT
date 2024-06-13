#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
     int n; cin>>n;
     string s;
     cin>>s;
     map<char,int> mp;
     for(int i=0;i<s.size();i++)
     {
       mp[s[i]]++;        
     }
     int ok=0;
     for(auto x : mp)
{
        if((x.second-1)*(n-1)+x.second>s.size()) {
            cout<<"-1\n";
            ok=1;
            break;
        }
     }
     if(ok==0) cout<<"1\n";
    }
}