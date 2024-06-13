#include<bits/stdc++.h>
using namespace std;
vector<char> v;
int a[17];
int n;
vector<string> v1;
void in()
{
   string str="";
   for(int i=0;i<n;i++)
   {
    if(a[i+1]==1) str+=v[i];
   }
   if(str.size()>0) v1.push_back(str);
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
        memset(a,0,sizeof(a));
        v.clear();
        string s;
        cin>>n;
        cin.ignore();
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]);
        }
        v1.clear();
        Try(1);
        sort(v1.begin(),v1.end());
        for(auto x: v1)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}