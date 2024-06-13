#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n)
{
    for(int i=1;i<=n/2;i++)
    {
      if(a[i]!=a[n-i+1]) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof(a));
    while(1)
    {
        if(check(a,n)==1)
        {
       for(int i=1;i<=n;i++)
       {
        cout<<a[i]<<" ";
       }
       cout<<endl;
        }
       int i=n;
       while(a[i]==1)
       {
        a[i]=1-a[i];
        i--;
       }
       if(i==0) break;
       else a[i]=1-a[i];
    }
}