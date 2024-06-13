#include<bits/stdc++.h>
using namespace std;
int a[11],n,x[11],k;
vector<vector<int>> s;
void in()
{
    int tong=0;
   for(int i=1;i<=n;i++)
   {
    if(a[i]==1) tong+=x[i-1];
   }
   if(tong==k)
   {
      vector<int> v;
      for(int i=1;i<=n;i++)
      {
        if(a[i]) v.push_back(x[i-1]);
      }
      s.push_back(v);
   }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) in();
        else Try(i+1);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        s.clear();
       cin>>n>>k;
       for(int i=0;i<n;i++) cin>>x[i];
       sort(x,x+n);
       Try(1);
       sort(s.begin(),s.end());
       if(s.size()<1) cout<<"-1";
       else
       for(auto x : s)
       {
        cout<<"[";
        for(int i=0;i<x.size()-1;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<x[x.size()-1]<<"] ";
       }
       cout<<endl;
    }
}