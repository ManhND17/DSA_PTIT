#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stack<int> st;
        int cnt=0;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push(i);
            else{
               if(st.size()) st.pop();
               if(st.size())
               {
                cnt=max(cnt,i-st.top());
               }
               else st.push(i);
            }
        }
       cout<<cnt<<endl;
    }
}