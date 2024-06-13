#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        int k;
        getline(cin,s);
        stack<int> st;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-')
            {
                k=st.top();
                st.pop();
                if(s[i]=='*') k=k*st.top();
               else if(s[i]=='+') k=k+st.top();
               else if(s[i]=='-') k-=st.top();
               else k/=st.top();
               st.pop();
               st.push(k);
            }
            else st.push(s[i]-'0');
        }
        cout<<st.top()<<endl;
    }
}