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
        int ok=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x){
                ok=i+1;
            }
        }
         cout<<ok<<endl;
    }
}