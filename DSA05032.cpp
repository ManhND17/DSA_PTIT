#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        int f[101][101];
        memset(f,0,sizeof f);
        for(int i=0;i<=s.size();i++) f[i][i]=1;
        for(int i=2;i<=s.size();i++)
        {
            for(int j=0;j<=s.size()-i;j++)
            {
                if(s[j]==s[j+i-1])
                {
                    f[j][j+i-1]=f[j+1][j+i-2]+2;
                }
                else f[j][j+i-1]=max(f[j][j+i-2],f[j+1][j+i-1]);
            }
        }
        cout<<s.size()-f[0][s.size()-1]<<endl;
    }
}