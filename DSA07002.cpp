#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    stack<int> st;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="PUSH") {
            int n; cin>>n;
            st.push(n);
        }
        else if(s=="PRINT")
        {
         if(st.size()==0) cout<<"NONE\n";
         else{
            cout<<st.top()<<endl;
         }
        }
        else{
            if(st.size()) st.pop();
        }
    }
}