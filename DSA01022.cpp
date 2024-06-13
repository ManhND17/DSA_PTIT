#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++)
        {
           cin>>b[i];
           a[i]=i;
        }
        int dem=1;
        bool ok=false;
        while(!ok)
        {
           
           int i=n-1;
           if(check(a,b,n))
           {
            cout<<dem<<endl;
            ok=true;
           }
           while(a[i]>a[i+1]&&i>0)
           {
            i--;
           } 
           dem++;
           if(i==0) ok=true;
           else{
            int j=n;
            while(a[j]<a[i]) j--;
            swap(a[i],a[j]);
            int l=i+1,r=n;
            while(l<=r)
            {
             swap(a[l],a[r]);
             l++;
             r--;
            }
           }
        }

    }
}