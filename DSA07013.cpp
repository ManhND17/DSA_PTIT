#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        long k;
        getline(cin,s);
        stack<long> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-')
            {
               k=st.top();
               st.pop();
               if(s[i]=='*') k=k*st.top();
               else if(s[i]=='+') k=k+st.top();
               else if(s[i]=='-') k=st.top()-k;
               else k=st.top()/k;
               st.pop();
               st.push(k);
            }
            else st.push(s[i]-'0');
        }
        cout<<st.top()<<endl;
    }
}