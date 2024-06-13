#include<bits/stdc++.h>
using namespace std;
int kiem_tra_ngoac_dung(string s)
{
    stack<char> st;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
        else{
            if(st.size()<1) return 0;
            else{
            char in=st.top();
            if(s[i]==')'&&in=='(') st.pop();
            else if(s[i]=='}'&&in=='{') st.pop();
            else if(s[i]==']'&&in=='[') st.pop();
            else return 0;
            }
        }
    }
    if(!st.size()) return 1;
    else return 0;
}
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        if(kiem_tra_ngoac_dung(s)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}