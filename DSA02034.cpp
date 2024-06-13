#include<bits/stdc++.h>
using namespace std;
int n,a[11],check[11];
void in()
{
    bool ok=false;
    for(int i=2;i<=n;i++)
    {
        if(abs(a[i]-a[i-1])==1) {
            ok=true;
            break;
        }
    }
    if(!ok)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
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
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        memset(check,0,sizeof(check));
        Try(1);
    }
}