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
        stack<string> st;
        stringstream ss(s);
        string s1;
        while(ss>>s1)
        {
          st.push(s1);
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}