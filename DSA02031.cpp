#include<bits/stdc++.h>
using namespace std;
int n,a[11],check[11];
void in()
{
  bool ok=false;
  for(int i=2;i<n;i++)
  {
    if(a[i]==1&&a[i-1]!=5&&a[i+1]!=5||a[i]==5&&a[i-1]!=1&&a[i+1]!=1) ok=true;
  }
  if(!ok){
    for(int i=1;i<=n;i++)
    {
        char c=a[i]-1+'A';
        cout<<c;
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
    char s;
    cin>>s;
    n=s-'A'+1;
    memset(check,0,sizeof(check));
    Try(1);
}