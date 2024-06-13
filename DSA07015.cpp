#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(char c)
{
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return 0;
}
ll Calc(ll a,ll b, char c)
{
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
}
void Solve()
{
    string s; getline(cin,s);
    stack<char> st; stack<ll> so;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.size()&&st.top()!='(')
            {
                ll cur1=so.top(); so.pop();
                ll cur2=so.top(); so.pop();
                char dau=st.top(); st.pop();
                so.push(Calc(cur2,cur1,dau)); 
            }
            if(st.size()) st.pop();
        }
        else if(isdigit(s[i]))
        {
            long long cur=0;
            while(i<s.size()&&isdigit(s[i]))
            {
                cur=cur*10+(s[i]-'0');
                i++;
            }
            so.push(cur);
            i--;
        }
        else 
        {
            while(st.size()&&check(st.top())>=check(s[i]))
            {
                ll cur1=so.top(); so.pop();
                ll cur2=so.top(); so.pop();
                char dau=st.top(); st.pop();
                so.push(Calc(cur2,cur1,dau)); 
            }
            st.push(s[i]);
        }
    }
    while(st.size())
    {
        ll cur1=so.top(); so.pop();
        ll cur2=so.top(); so.pop();
        char dau=st.top(); st.pop();
        so.push(Calc(cur2,cur1,dau)); 
    }
    cout<<so.top()<<endl;
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        Solve();
    }
}