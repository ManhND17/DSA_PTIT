#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long a[n];
        priority_queue<long,vector<long>,greater<long>> qe;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            qe.push(a[i]);
        }
        long long chiphi=0;
        while(qe.size()>1)
        {
            long tmp=qe.top();
            qe.pop();
            tmp+=qe.top();
            tmp%=mod;
            qe.pop();
            qe.push(tmp);
            chiphi+=tmp;
            chiphi%=mod;
        }
        cout<<chiphi<<endl;
    }
}