#include<bits/stdc++.h>
using  namespace std;
int a[11],n;
void in()
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i];
    }
    cout<<" ";
}
bool OK=false;
void sinh()
{
   int i=n-1;
   while(i>0&&a[i]>a[i+1])
   {
    i--;
   }
   if(i==0) OK=true;
   else{
    int k=n;
    while(a[k]<a[i]) k--;
    swap(a[k],a[i]);
    int l=i+1,r=n;
    while(l<=r)
    {
        swap(a[l],a[r]);
        l++; r--;
    }
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=i;
        OK=false;
        while(!OK)
        {
            in();
            sinh();
        }
        cout<<endl;
    }
}