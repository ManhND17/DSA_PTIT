#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        long long sum=0;
        while(pq.size()>1)
        {
         long long tmp=pq.top();
         pq.pop();
         tmp+=pq.top();
         sum+=tmp;
         pq.pop();
         pq.push(tmp);
        }
        cout<<sum<<endl;
    }
}