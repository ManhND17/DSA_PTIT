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
        long cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else{
                if(st.size())
                {
                    st.pop();
                    cnt+=2;
                }
            }
        }
        cout<<cnt<<endl;
    }
}