#include<bits/stdc++.h>
using namespace std;
main()
{
    int n; cin>>n; cin.ignore();
    int a[n+1][n+1]={0};
    for(int i=1;i<=n;i++)
    {
      string s;
      getline(cin,s);
      stringstream ss(s);
      string s1;
      while(ss>>s1)
      {
         a[i][stoi(s1)]=1;
      }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}