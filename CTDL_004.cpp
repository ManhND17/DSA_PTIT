#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[101],x[101];
bool ok=false;
void sinh()
{
    int i=n;
    while(a[i]==1&&i>0){
    a[i]=0;
    i--;
    }
   if(i==0) ok=true;
   else a[i]=1;
}
int check()
{
    int t=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]) t++;
    }
    if(t!=k) return 0;
    else{
       int cnt=0;
       int b[101];
        for(int i=1;i<=n;i++)
        {
            if(a[i])
            b[cnt++]=x[i];
        }
        for(int i=1;i<cnt;i++)
        {
            if(b[i]<=b[i-1]) return 0;
        }
        return 1;
    }
}
main()
{
    cin>>n>>k;
    int dem=0;
    for(int i=1;i<=n;i++) cin>>x[i];
    while(!ok)
    {
        sinh();
        if(check()) dem++;
    }
    cout<<dem<<endl; 
}