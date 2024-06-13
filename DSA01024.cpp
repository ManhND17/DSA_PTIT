#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[100];
set<string> v;
vector<string> v1;
void xuat()
{
    for(int i=1;i<=k;i++)
    {
       cout<<v1[x[i]-1]<<" ";
    }
    cout<<endl;
}
void Try(int i)
{
   for(int j=x[i-1]+1;j<=n-k+i;j++)
   {
    x[i]=j;
    if(i==k) xuat();
    else Try(i+1);
   }
}
main()
{
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    v.insert(s);
  }
  n=v.size();
  for(auto x : v)
  {
    v1.push_back(x);
  }
  Try(1);
}