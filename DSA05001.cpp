#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        int a[1001][1001]={0};
        int n=s1.size();
        int m=s2.size();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]); 
            }
        }
        cout<<a[n][m]<<endl;
    }
}