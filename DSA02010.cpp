#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[101];
int dem=0;
void Try(int x,vector<int> v,int s)
{
   if(x<0) return;
   if(x==0)
   {
    int check=1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1]){
            check=0;
            break;
        }
    }
    if(check)
    {
        dem++;
        cout<<"[";
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<"]";
    }
   }
   for(int i=s;i<n;i++)
   {
    v.push_back(a[i]);
    Try(x-a[i],v,i);
    v.pop_back();
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
       cin>>n>>x;
       vector<int> v;
       for(int i=0;i<n;i++) cin>>a[i];
       sort(a,a+n);
       Try(x,v,0);
       if(dem==0) cout<<"-1";
       cout<<endl;
    }
}