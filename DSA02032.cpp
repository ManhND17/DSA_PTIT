#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[21];
vector<string> ss;
void Try(int x,vector<int> v,int it)
{
    if(x<0) return;
    if(x==0){
        int dk=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])
            {
                dk=0;
                break;
            }
        }
        if(dk)
        {
            string s="{";
            for(int i=0;i<v.size()-1;i++)
            {
              s+=to_string(v[i])+" ";
            }
            s+=to_string(v[v.size()-1]);
            s+="}";
            ss.push_back(s);
        }
    }
    for(int i=it;i<n;i++)
    {
        v.push_back(a[i]);
        Try(x-a[i],v,i);
        v.pop_back();
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
     cin>>n>>x;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     ss.clear();
     vector<int> v;
     Try(x,v,0);
     if(!ss.size()) cout<<"-1";
     else{
        cout<<ss.size()<<" ";
        for(auto k:ss) cout<<k<<" ";
     }
     cout<<endl;
    }
}