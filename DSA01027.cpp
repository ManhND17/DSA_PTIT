#include<bits/stdc++.h>
using namespace std;
int a[11],n;
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
int main()
{
    cin>>n;
    int b[n+1];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[i+1]=i+1;
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        mp[i+1]=b[i];
    }
    OK=false;
    while(!OK)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<mp[a[i]]<<" ";
        }
        cout<<endl;
        sinh();
    }

}