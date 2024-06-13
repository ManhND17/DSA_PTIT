#include<bits/stdc++.h>
using namespace std;
string n;
bool check(string a)
{
    return a.size()<n.size()||(a.size()==n.size()&&a<=n);
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        queue<string> qe;
        long long dem=0;
        qe.push("1");
        while(qe.size())
        {
          string k=qe.front();
          dem++;
          qe.pop();
          if(check(k+"0"))
          {
            qe.push(k+"0");
          }
          if(check(k+"1"))
          {
            qe.push(k+"1");
          }
        }
        cout<<dem<<endl;
    }
}