#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int a[n];
     map<int,int> mp;
     for( int i=0;i<n;i++)
     {
        cin>>a[i];
        mp[a[i]]++;
     }   
     cout<<mp[0]<<endl;
    }
}