#include<bits/stdc++.h>
using namespace std;
int a[11][11];
int n;
vector<string> v;
void Try(int i,int j,string s)
{
    if(a[0][0]==0||a[n-1][n-1]==0) return;
    if(i==n-1&&j==n-1)  v.push_back(s);
    if(i!=n-1&&a[i+1][j]==1)
    {
        Try(i+1,j,s+"D");
    }
    if(j!=n-1&&a[i][j+1]==1)
    {
        Try(i,j+1,s+"R");
    }
}
void dichuyen()
{
    v.clear();
    Try(0,0,"");
    if(v.size()<1) cout<<"-1";
    else{
        sort(v.begin(),v.end());
        for(auto x : v) cout<<x<<" ";
    }
    cout<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        dichuyen();
    }
}