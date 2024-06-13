#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int n=s.size();
        long f[1001][1001];
        memset(f,0,sizeof f);
        for(int i=0;i<1001;i++) f[i][i]=1;
        for(int i=0;i<1000;i++) f[i+1][i]=1;
        int res=1;
        for(int k=2;k<=n;k++)
        {
            for(int i=0;i<=n-k;i++)
            {
                if(s[i]==s[i+k-1]){
                    f[i][i+k-1]=f[i+1][i+k-2];
                }
                else f[i][i+k-1]=0;
                if(f[i][i+k-1]) res=k;
            }
        }
        cout<<res<<endl;
    }
}