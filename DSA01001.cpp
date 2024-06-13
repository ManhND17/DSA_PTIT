#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t; cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int a[1000];
        for(int i=0;i<x.size();i++)
        {
            a[i+1]=x[i]-'0';
        }
        int i=x.size();
        while(a[i]==1)
        {
            a[i]=0;
            i--;
        }
        a[i]=1-a[i];
        for(int i=1;i<=x.size();i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}