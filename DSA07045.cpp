#include<bits/stdc++.h>
using namespace std;
main()
{
    string s; getline(cin,s);
    stack<char> l,r;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='<')
        {
            if(l.size())
            {
                r.push(l.top());
                l.pop();
            }
        }
        else if(s[i]=='>')
        {
            if(r.size())
            {
                l.push(r.top());
                r.pop();
            }
        }
        else if(s[i]=='-')
        {
            if(l.size()) l.pop();
        }
        else l.push(s[i]);
    }
    string ans="";
    while(l.size())
    {
        ans+=l.top(); l.pop();
    }
    reverse(ans.begin(),ans.end());
    while(r.size())
    {
        ans+=r.top(); r.pop();
    }
    cout<<ans;
}