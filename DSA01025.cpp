#include<bits/stdc++.h>
using namespace std;
int n,k,a[17];

void in()
{
    for(int i=1;i<=k;i++)
    {
        char c=a[i]+64;
        cout<<c;
    }
    cout<<endl;
}
bool ok=false;
void sinh()
{
  int i=k;
  while(a[i]==n-k+i&&i>0) i--;
  if(i==0) ok=true;
  else{
    a[i]++;
    for(int j=i+1;j<=k;j++)
    {
        a[j]=a[j-1]+1;
    }
  }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=k;i++)
        {
            a[i]=i;
        }
        ok=false;
        while(!ok)
        {
            in();
            sinh();
        }
    }
}