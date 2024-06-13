#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    queue<int> qe;
    while(t--)
    {
        string s;
        getline(cin,s);
        if(s=="PRINTFRONT"){
           if(qe.size()) cout<<qe.front()<<endl;
           else cout<<"NONE\n";
        }
        else if(s=="POP")
        {
          if(qe.size()) qe.pop();
        }
        else{
          int k=0;
          for(int i=0;i<s.size();i++)
          {
            if(isdigit(s[i])) k=k*10+s[i]-'0';
          }
          qe.push(k);
        }
    }
}