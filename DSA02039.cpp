#include<bits/stdc++.h>
using namespace std;
vector<string> ss;
bool cmp(string a,string b)
{
    return a>b;
}
void Try(int n,vector<int> v)
{
    if(n<0) return;
    if(n==0) {
        int dk=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])
            {
             dk=0;
             break;
            }
        }
        if(dk){
            string str="(";
            for(int i=v.size()-1;i>0;i--) str+=to_string(v[i])+" ";
            str+=to_string(v[0]);
            str+=")";
            ss.push_back(str);
        }
    }
    for(int i=n;i>=1;i--)
    {
        v.push_back(i);
        Try(n-i,v);
        v.pop_back();
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
     int n; cin>>n;
     ss.clear();
     vector<int> v;
     Try(n,v);
     cout<<ss.size()<<endl;
     sort(ss.begin(),ss.end(),cmp);
     for(auto x:ss) cout<<x<<" ";
     cout<<endl;
    }
}