#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      if(a[i]>=a[i+1]) return false;
    }
    return true;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int I[1001];
        for(int i=0;i<n;i++)
        {
            cin>>I[i];
        }
        if(check(I,n)) cout<<"1\n";
        else cout<<"0\n";
    }
}