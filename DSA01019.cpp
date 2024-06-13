#include<bits/stdc++.h>
using namespace std;
int n,a[17];
void in()
{   if(a[1]==1&&a[n]==0)
    {
    bool check=true;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1&&a[i+1]==1){
            check=false;
            break;
        }
    }
    if(check)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1) cout<<"H";
            else cout<<"A";
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
        a[i]-=1;
        i--;
    }
    if(i==0) ok=true;
    else a[i]=1;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
       cin>>n;
       ok=false;
       while(!ok)
       {
        in();
        sinh();
       }
    }
}