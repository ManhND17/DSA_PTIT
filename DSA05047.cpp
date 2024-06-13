#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int x,int y)
{
    if(x>=0&&x<4&&y>=0&&y<n) return true;
    else return false;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        int a[4][n];
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        long long f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<n;j++)
            {
                
            }
        }
    }
}