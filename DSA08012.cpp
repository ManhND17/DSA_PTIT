#include<bits/stdc++.h>
using namespace std;
int check(int x)
{
    string s=to_string(x);
    map<char,int> mp; 
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>1) return 0;
    }
    return 1;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int l,r; cin>>l>>r;
        queue<int> qe;
        for(int i=1;i<=5;i++) qe.push(i);
        int dem=0;
        while(qe.size())
        {
            int x=qe.front(); qe.pop();
            if(x>=l&&x<=r&&check(x)) dem++;
            if(x>r) break;
            for(int i=0;i<=5;i++)
            {
                qe.push(x*10+i);
            }
        }
        cout<<dem<<endl;
    }
}