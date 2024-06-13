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
        s=s+"I";
        stack<char> st;
        for(int i=9;i>=1;i--) st.push(i+'0');
        string ans="";
        string res="";
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='D')
           {
            ans=st.top()+ans;
            st.pop();
           }
           else{
            ans=st.top()+ans;
            st.pop();
            res=res+ans;
            ans="";
           }
        }
        cout<<res<<endl;
    }
}