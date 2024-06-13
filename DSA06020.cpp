#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        int ok=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x){
                cout<<"1\n";
                ok=0;
                break;
            }
        }
        if(ok==1) cout<<"-1\n";
    }
}