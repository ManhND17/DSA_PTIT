#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')'&&st.size()&&st.top()=='(') st.pop();
            else st.push(s[i]);
        }
        int mo=0,dong=0;
        while(st.size())
        {
            if(st.top()=='(') dong++;
            else mo++;
            st.pop();
        }
        if(mo%2==0) cout<<(mo+dong)/2;
        else cout<<(mo+dong)/2+1;
        cout<<endl;
    }
}