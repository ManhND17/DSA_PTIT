#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;
        long f[101][101];
        memset(f,0,sizeof 0);
        for(int i=0;i<=s2.size();i++) f[0][i]=i;
        for(int i=1;i<=s1.size();i++) f[i][0]=i;
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    f[i][j]=f[i-1][j-1];
                }
                else{
                    f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+1;
                }
            }
        }
        cout<<f[s1.size()][s2.size()]<<endl;
    }
}