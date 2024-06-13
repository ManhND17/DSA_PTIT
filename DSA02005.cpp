#include<bits/stdc++.h>
using namespace std;
int a[11],n,check[11];
string s;
void in()
{
    for(int i=1;i<=n;i++)
    {
        int x=a[i]-1;
        cout<<s[x];
    }
    cout<<" ";
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
       if(check[j]==0)
       {
        a[i]=j;
        check[j]=1;
        if(i==n) in();
        else Try(i+1);
        check[j]=0;
       }
    }
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
     getline(cin,s);
     n=s.size();
     memset(check,0,sizeof(check));
     Try(1);
     cout<<endl;
    }
}