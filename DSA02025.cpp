#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
int check[11];
int f[20][20];
string v[200];
int m=INT_MAX;
void add()
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
       cnt+=f[a[i-1]][a[i]];
    }
    m=min(cnt,m);
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!check[j])
        {
            a[i]=j;
            check[j]=1;
            if(i==n) add();
            else Try(i+1);
            check[j]=0;
        }
    }
}
int count(string a,string b)
{
    map<char,int> mp;
    for(auto x:a) mp[x]++;
    for(auto x:b) mp[x]++;
    int cnt=0;
    for(auto x:a) if(mp[x]>1) cnt++;
    return cnt;
}
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            f[i][j]=count(v[i],v[j]);
            f[j][i]=f[i][j];
        }
    }
    Try(1);
    cout<<m<<endl;
}