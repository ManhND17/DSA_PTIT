#include<bits/stdc++.h>
using namespace std;
int n,k,a[17];
void in()
{   
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1) dem++;
    }
    if(dem==k)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
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
int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ok=false;
        while(!ok)
        {
            in();
            sinh();
        }
        cout<<endl;
    }
}