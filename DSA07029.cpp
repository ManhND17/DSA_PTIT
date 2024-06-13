#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stack<char> st;
        string k="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==']')
            {
            string res="";
            while(st.top()!='['&&st.size())
            {
                res=st.top()+res;
                st.pop();
            }
            st.pop();
            string num="";
            while(st.size()&&isdigit(st.top()))
            {
                num=st.top()+num;
                st.pop();
            }
            if(num=="") num="1";
            string x=res;
            for(int j=0;j<stoi(num)-1;j++)
            {
                res+=x;
            }
            for(int j=0;j<res.size();j++)
            {
                st.push(res[j]);
            }
            }
            else
            {
             st.push(s[i]);
            }
        }
        while(st.size())
        {
            k=st.top()+k;
            st.pop();
        }
        cout<<k<<endl;
    }
}