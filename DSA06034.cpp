#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;
        long a[n];
        map<long,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=mp[k-a[i]];
            if(k==2*a[i]) cnt--;
        }
        cout<<cnt/2<<endl;
    }
}