#include<bits/stdc++.h>
using namespace std;
int a[9][9],vs[9][9];
int n;
vector<string> v;
void Try(int i,int j,string s)
{
    if(!a[0][0]&&!a[n-1][n-1]) return;
    if(i==n-1&&j==n-1) v.push_back(s);
    if(a[i+1][j]&&i!=n-1&&!vs[i+1][j])
    {
        vs[i][j]=1;
        Try(i+1,j,s+"D");
        vs[i][j]=0;
    }
    if(a[i][j-1]&&j!=0&&!vs[i][j-1])
    {
        vs[i][j]=1;
        Try(i,j-1,s+"L");
        vs[i][j]=0;
    }
    if(a[i-1][j]&&i!=0&&!vs[i-1][j])
    {
        vs[i][j]=1;
        Try(i-1,j,s+"U");
        vs[i][j]=0;
    }
    if(a[i][j+1]&&j!=n-1&&!vs[i][j+1])
    {
        vs[i][j]=1;
        Try(i,j+1,s+"R");
        vs[i][j]=0;
    }
}
void dichuyentrongmecung()
{
    v.clear();
    memset(vs,0,sizeof(vs));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    Try(0,0," ");
    if(v.size()<1) cout<<"-1\n";
    else{
        sort(v.begin(),v.end());
        for(auto x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
     dichuyentrongmecung();
    }
}