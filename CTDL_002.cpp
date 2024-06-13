#include<bits/stdc++.h>
using namespace std;
int a[12],n;
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
main()
{
    int k;
    cin>>n>>k;
    int x[n+1];
    for(int i=1;i<=n;i++) cin>>x[i];
    int dem=0;
    while(!ok)
    {
        int tong=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]) tong+=x[i];
        }
        if(tong==k){
            dem++;
            for(int i=1;i<=n;i++)
            {
                if(a[i]) cout<<x[i]<<" ";
            }
            cout<<endl;
        }
        sinh();
    }
    cout<<dem<<endl;
}