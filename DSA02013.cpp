#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,p,s;
vector<vector<int>> ss;
int check(int n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    for(int i=2;i<=trunc(sqrt(n));i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
void Try(int s,vector<int> v1,int it)
{
    if(s<0) return ;
    if(s==0)
    {
        if(v1.size()==n)
        {
            int dk=1;
            for(int i=0;i<v1.size()-1;i++)
            {
                if(v1[i]>=v1[i+1])
                {
                dk=0;
                break;
                }
            }
            if(dk)
            {
             ss.push_back(v1);
            }
        }
    }
    for(int i=it;i<v.size();i++)
    {
        if(v[i]>p)
        {
            v1.push_back(v[i]);
            Try(s-v[i],v1,i);
            v1.pop_back();
        }
    }
}
main()
{
    int t; cin>>t;
    for(int i=2;i<=200;i++)
    {
        if(check(i)) v.push_back(i); 
    }
    while(t--)
    {
      
     cin>>n>>p>>s;
     ss.clear();
     vector<int> v1;
     Try(s,v1,0);
     cout<<ss.size()<<endl;
     for(auto k:ss)
     {
        for(auto x:k) cout<<x<<" ";
        cout<<endl;
     }
    }
}