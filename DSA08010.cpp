#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<int> qe;
        qe.push(n);
        unordered_map<int,int> mp;
        while(qe.size())
        {
          int x=qe.front(); qe.pop();
          if(x==1)
          {
            cout<<mp[x]<<endl;
            break;
          }
          for(int i=2;i<=sqrt(x);i++)
          {
            if(x%i==0&&!mp[x/i])
            {
                mp[x/i]=mp[x]+1;
                qe.push(x/i);
            }
          }
          if(x>=2&&!mp[x-1])
          {
            mp[x-1]=mp[x]+1;
            qe.push(x-1);
          }
        }        
    }
}