#include<bits/stdc++.h>
using namespace std;
bool ok=false;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        vector<vector<int>> V;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        ok=false;
        while(!ok)
        {
            V.push_back(v);
            if(v.size()==1) ok=true;
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
        for(int i=V.size()-1;i>=0;i--)
        {
            cout<<"[";
            for(int j=0;j<V[i].size()-1;j++)
            {
                cout<<V[i][j]<<" ";
            }
            cout<<V[i][V[i].size()-1];
            cout<<"] ";
        }
        cout<<"\n";
    }
}