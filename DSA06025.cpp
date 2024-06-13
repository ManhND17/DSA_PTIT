#include<bits/stdc++.h>
using namespace std;
main()
{
    int n ; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Buoc "<<i<<": ";
        vector<int> se;
        for(int j=0;j<=i;j++)
        {
            se.push_back(a[j]);
        }
        sort(se.begin(),se.end());
        for(auto x : se)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}