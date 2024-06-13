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
    int l=0,r=0;
    for(int i=1;i<n;i++)
    {
       r+=a[i];
    }
    int ok=0;
    for(int i=1;i<n;i++)
    {
        l+=a[i-1];
        r-=a[i];
        if(l==r){
            cout<<i+1<<endl;
            ok=1;
            break;
        }
    }
    if(ok==0) cout<<"-1\n";
 }
}