#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; string s1,s2;
        cin>>n>>s1>>s2;
        set<string> v;
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            v.insert(s);
        }
        queue<pair<string,int>> qe;
        qe.push({s1,1});
        while(qe.size())
        {
            pair<string,int> k=qe.front();
            qe.pop();
            if(k.first==s2)
            {
                cout<<k.second<<endl;
                break;
            }
            for(auto &x:k.first)
            {
                char save=x;
                for(int j='A';j<='Z';j++)
                {
                    x=j;
                    if(v.count(k.first))
                    {
                        v.erase(k.first);
                        qe.push({k.first,k.second+1});
                    }
                } 
                x=save;
            }
        }
    }
}