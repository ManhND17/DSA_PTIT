#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
      string s;
      getline(cin,s);
      if(s[0]=='0')
      {
        cout<<0<<endl;
        continue;
      } 
      long long f[100]={0};
      f[0]=1;
      f[1]=1;
      for(int i=2;i<=s.size();i++)
      {
        if(s[i-1]>'0') f[i]=f[i-1];
        if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7'))
        {
            f[i]+=f[i-2];
        }
      }
      cout<<f[s.size()]<<endl;
    }
}