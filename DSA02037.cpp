#include<bits/stdc++.h>
using namespace std;
int n;
int a[16],b[16];
vector<vector<int>> v;
bool cmp(int a,int b)
{
    return a>b;
}
int check(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    } 
    return 1;
}
void add()
{
    vector<int> v1;
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1) v1.push_back(b[i-1]),tong+=b[i-1];
    }
    if(check(tong)) v.push_back(v1);
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) add();
        else Try(i+1); 
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
     cin>>n;
     for(int i=0;i<n;i++) cin>>b[i];
     sort(b,b+n,cmp);
     v.clear();
     memset(a,0,sizeof(a));
     Try(1);
     sort(v.begin(),v.end());
     for(auto s:v)
     {
        for(auto x:s)
        {
            cout<<x<<" ";
        }
        cout<<endl;
     }
    }
}