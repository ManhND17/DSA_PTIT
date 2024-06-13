#include<bits/stdc++.h>
using namespace std;
int n,a[16];
int check(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i+1]&&a[i]==1) return 0;
    }
    int dem=0;
    for(int i=1;i<=n;i++)
    {   
        if(a[i]==0)
        {
            dem++;
        }
        else dem=0;
        if(dem>3) return 0;
    }
    return 1;
}
void in()
{
    if(check(a,n))
    {
    if(a[1]==1&&a[n]==0)
    {
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0) cout<<"6";
        else cout<<"8";
    }
    cout<<endl;
    }
    }
}
bool ok=false;
void sinh()
{
    int i=n;
    while(a[i]==1&&i>0) 
    {
        a[i]--;
        i--;
    }
    if(i==0) ok=true;
    else a[i]++;
}
main()
{
  cin>>n;
  ok=false;
  while(!ok)
  {
    in();
    sinh();
  }
}