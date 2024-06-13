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
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            a[i]=s[i-1]-'0';
        }
        int b[n+1];
        b[1]=a[1];
        for(int i=2;i<=n;i++)
        {
            if(a[i]==a[i-1]) b[i]=0;
            else b[i]=1;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }
}