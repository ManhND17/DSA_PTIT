#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
      string s; getline(cin,s);
      stack<string> st;
      string k;
      for(int i=0;i<s.size();i++)
      {
        if(isalpha(s[i])) st.push(string(1,s[i]));
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
          k=st.top();
          st.pop();
          k=s[i]+st.top()+k;
          st.pop();
          st.push(k);
        }
      }
      cout<<st.top()<<endl;
    }
}