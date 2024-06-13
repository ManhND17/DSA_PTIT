#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<string> qe;
        qe.push("1");
        for(int i=2;i<=n;i++)
        {
          string res="";
          int nho=1;
          for(int j=qe.back().size()-1;j>=0;j--)
          {
            res=to_string((qe.back()[j]-'0'+nho)%2)+res;
            nho=(qe.back()[j]-'0'+nho)/2;
          }
          if(nho==1) res="1"+res;
          qe.push(res);
        }
        while(qe.size())
        {
            cout<<qe.front()<<" ";
            qe.pop();
        }
        cout<<endl;
    }
}