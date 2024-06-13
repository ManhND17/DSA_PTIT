#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<pair<int,int>> qe;
        qe.push({n,0});
        while(qe.size())
        {
            pair<int,int> p=qe.front(); qe.pop();
            if(p.first==1)
            {
                cout<<p.second<<endl;
                break;
            }
            if(p.first%2==0) qe.push({p.first/2,p.second+1});
            if(p.first%3==0) qe.push({p.first/3,p.second+1});
            qe.push({p.first-1,p.second+1});
        }
    }
}