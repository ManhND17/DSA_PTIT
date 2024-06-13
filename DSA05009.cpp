#include<bits/stdc++.h>
using namespace std;
int check(int b[],int n)
{
  int s=0;
  for(int i=0;i<n;i++)
  {
    s+=b[i];
  }
  if(s%2!=0||n<2) return 0;
  int sum[10001];
  memset(sum,0,sizeof(sum));
  sum[0]=1;
  for(int i=0;i<n;i++)
  {
    for(int j=s;j>=b[i];j--)
    {
        if(!sum[j]&&sum[j-b[i]])
        sum[j]=1;
    }
  }
  return sum[s/2];
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(check(a,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}