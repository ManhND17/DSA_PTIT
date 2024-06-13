#include<bits/stdc++.h>
using namespace std;
int dem=0;
int n,m;
int a[11][11];
void Try(int i,int j)
{
   if(i==n-1&&j==m-1) dem++;
   if(i<n-1&&j<=m-1){
      Try(i+1,j);
   }
   if(i<=n-1&&j<m-1)
   {
    Try(i,j+1);
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        dem=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Try(0,0);
        cout<<dem<<endl; 
    }
}