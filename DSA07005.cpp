#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        s="("+s+")";
        stack<string> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {
              string res="";
              while(st.size()&&st.top()!="(")
              {
              res=st.top()+res;
              st.pop();
              }
              st.pop();
              if(!st.empty()&&st.top()=="-")
              {
                for(auto & x:res)
                {
                 if(x=='+') x='-';
                 else if(x=='-') x='+';
                }
                 
              }
              st.push(res);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
}