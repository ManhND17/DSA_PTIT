#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b;
        getline(cin,a);
        a=" "+a;
        getline(cin,b);
        b=" "+b;
        int n=a.size();
        int m=b.size();
        long long f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
              if(a[i]==b[j]){
                f[i][j]=f[i-1][j-1]+1;
              }
              else f[i][j]=max(f[i][j-1],f[i-1][j]);
            }
        }
        cout<<f[n-1][m-1]<<endl;
    }
}