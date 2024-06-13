#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
      int n,m,k;
      cin>>n>>m>>k;
      string x,y,z;  cin>>x>>y>>z;
      x=" "+x;
      y=" "+y;
      z=" "+z;
    
      int f[101][101][101];
      memset(f,0,sizeof f);
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
            for(int p=1;p<=k;p++)
            {
                if(x[i]==y[j]&&x[i]==z[p]) f[i][j][p]=f[i-1][j-1][p-1]+1;
                else{
                    vector<int> v;
                    v.push_back(f[i-1][j][p]);
                    v.push_back(f[i-1][j-1][p]);
                    v.push_back(f[i-1][j][p-1]);
                    v.push_back(f[i][j-1][p]);
                    v.push_back(f[i][j][p-1]);
                    v.push_back(f[i][j-1][p-1]);
                    sort(v.begin(),v.end());
                    f[i][j][p]=v[v.size()-1];
                }
            }
        }
      }
      cout<<f[n][m][k]<<endl;
    }
}