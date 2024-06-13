#include<bits/stdc++.h>
using namespace std;
void phantichso(int n,vector<int> v)
{
   if(n==0)
   {
    int dk=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[i-1]) {
            dk=1;
            break;
        }
    }
    if(dk==0)
    {
    cout<<"(";
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1];
    cout<<") ";
   }
   }
   for(int i=n;i>=1;i--)
   {
    v.push_back(i);
    phantichso(n-i,v);
    v.pop_back();
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        phantichso(n,v);
        cout<<endl;
    }
}