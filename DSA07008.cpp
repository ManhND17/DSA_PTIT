#include<bits/stdc++.h>
using namespace std;
int degree(char s)
{
    if(s=='^') return 3;
    if(s=='*'||s=='/') return 2;
    if(s=='+'||s=='-') return 1;
    return 0;
}
main()
{
    int t; cin>>t;
     cin.ignore();
    while(t--)
    {
        string s; 
        getline(cin,s);
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i])) res+=s[i];
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')')
            {
                while(st.size()&&st.top()!='(')
                {
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(st.size()&&degree(st.top())>=degree(s[i]))
                {
                   res+=st.top();
                   st.pop(); 
                }
                st.push(s[i]);
            }
        }
        while(st.size())
        {
            res+=st.top();
            st.pop();
        }
        cout<<res<<endl;
    }
}