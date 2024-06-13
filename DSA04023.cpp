#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
      int n,k; cin>>n>>k;
      vector<int> v;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        v.push_back(a[i]);
      }
      sort(v.begin(),v.end());
      long long cnt=0;  
      for(int i=0;i<n;i++)
      {
        auto it=lower_bound(v.begin(),v.end(),a[i]+k);
        cnt+=it-v.begin()-i-1;
      }
      cout<<cnt<<endl;
    }
}