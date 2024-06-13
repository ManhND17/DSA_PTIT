#include<bits/stdc++.h>
using namespace std;
int a[11],n;
void in()
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0) cout<<"A";
        else cout<<"B";
    }
    cout<<" ";
}
bool OK=false;
void sinh()
{
    int i=n;
    while(a[i]==1&&i>0)
    {
      
      a[i]-=1;
      i--;
    }
    if(i==0) OK=true;
    else a[i]+=1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
       cin>>n;
       OK=false;
       while(!OK)
       {
        in();
        sinh();
       }
       cout<<endl;
    }
}