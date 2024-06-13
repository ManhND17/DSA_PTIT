#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int n=s.size();
        int x[n+1];
        for(int i=1;i<=n;i++)
        {
            x[i]=s[i-1]-'0';
        }
        int a[n+1];
        a[1]=x[1];
        for(int i=2;i<=n;i++)
        {
           if(x[i]==1) a[i]=1-a[i-1];
           else a[i]=a[i-1];
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}