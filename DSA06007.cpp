#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l,r;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=a[i])
            {
               l=i; break;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            if(b[j]!=a[j])
            {
                r=j;
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}