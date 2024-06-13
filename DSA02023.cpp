#include<bits/stdc++.h>
using namespace std;
int n,k,a[16];
vector<string> v;
void in()
{
   for(int i=1;i<=k;i++)
   {
    cout<<v[a[i]-1]<<" ";
   }
   cout<<endl;
}
void Try(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
main()
{
  cin>>n>>k;
  set<string> se;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    se.insert(s);
   }
   n=se.size();
   for(int i=1;i<=k;i++)
   {
    a[i]=i;
   }
   for(auto x : se)
   {
    v.push_back(x);
  }
  Try(1);
}