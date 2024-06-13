#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<vector<int>> v;
    bool check;
    int dem=0;
    for(int i=0;i<n;i++)
    {
        check=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                check=true;
                swap(a[j],a[j+1]);
            }
        }
        if(!check) break;
        dem++;
         vector<int> se;
         for(int j=0;j<n;j++)
         {
            se.push_back(a[j]);
         }
         v.push_back(se);
    }
    for(int i=dem-1;i>=0;i--)
    {
        cout<<"Buoc "<<i+1<<": ";
        for(auto x : v[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    }
}