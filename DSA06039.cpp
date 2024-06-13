#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ok=1;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]>1){
                cout<<a[i]<<endl;
                ok=0;
                break;
            }
        }
        if(ok==1) cout<<"NO\n";
    }
}