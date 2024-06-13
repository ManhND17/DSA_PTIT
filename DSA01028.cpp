#include<bits/stdc++.h>
using namespace std;
int n,k,a[11];
bool ok=false;
void sinh()
{
    int i=k;
    while(a[i]==n-k+i&&i>0)
    {
        i--;
    }
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
   cin>>n>>k;
   int b[n];
   set<int> se;
   for(int i=0;i<n;i++)
   {
    cin>>b[i];
    se.insert(b[i]);
   }
   n=se.size();
   for(int i=1;i<=k;i++) a[i]=i;
   map<int,int> mp;
   int cnt=1;
   for(auto x : se)
   {
    mp[cnt++]=x;
   }
   ok=false;
   while(!ok)
   {
    for(int i=1;i<=k;i++)
    {
        cout<<mp[a[i]]<<" ";
    }
    cout<<endl;
    sinh();
   }
}