#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            string s; 
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                mp[s[i]]++;
            }
        }
        for(auto x : mp)
        {
            cout<<x.first<<" ";
        }
        cout<<endl;
    }
}