#include<bits/stdc++.h>
using namespace std;
main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,k; cin>>n>>k;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) v.push_back(a[i]);
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
       auto it=lower_bound(v.begin(),v.end(),a[i]+k);
       cnt+=it-v.begin()-i-1;
    }
    cout<<cnt<<endl;
  }
}