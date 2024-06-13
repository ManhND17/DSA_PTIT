#include<bits/stdc++.h>
using namespace std;
bool ok=false;
void dayso(vector<int> v)
{   
    cout<<"[";
    for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
    cout<<v[v.size()-1]; cout<<"]\n";
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        ok=false;
        while(!ok)
        {
            if(v.size()==1) ok=true;
            cout<<"[";
            for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
            cout<<v[v.size()-1]; cout<<"]\n";
            vector<int> v1;
            for(int i=0;i<v.size()-1;i++)
            {
             int x;
             x=v[i]+v[i+1];
             v1.push_back(x);
            }
            v.clear();
            for(auto x : v1)
            {
            v.push_back(x);
            }
        }
    }
}