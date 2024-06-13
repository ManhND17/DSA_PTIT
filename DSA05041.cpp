#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=0;i<1001;i++) f[i][i]=1;
        for(int k=2;k<=s.size();k++)
        {
            for(int i=0;i<=s.size()-k;i++)
            {
                if(s[i]==s[i+k-1])
                {
                    f[i][i+k-1]=f[i+1][i+k-2]+2;
                }
                else f[i][i+k-1]=max(f[i][i+k-2],f[i+1][i+k-1]);
            }
        }
        cout<<s.size()-f[0][s.size()-1]<<endl;
    }
}