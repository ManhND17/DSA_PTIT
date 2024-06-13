#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        set<int> se;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            se.insert(a[i]);
        }
        sort(a,a+n);
        if(se.size()>1){
            int dem=0;
            for(auto x : se)
            {
                dem++;
                cout<<x<<" ";
                if(dem==2) break;
            }
            cout<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}