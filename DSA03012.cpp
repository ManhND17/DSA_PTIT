#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
         mp[s[i]]++;
        }
        int ok=0;
        for(auto x : mp)
        {
            if(2*x.second > s.size()+1){
                cout<<"-1\n";
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<"1\n";
    }
}