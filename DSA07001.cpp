#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    stack<int> st;
    while(cin>>s)
    {
      if(s=="show") {
        if(st.size()==0) cout<<"empty\n";
        else{
            stack<int> q;
            while(st.size())
            {
                q.push(st.top());
                st.pop();
            }
            while(q.size())
            {
                cout<<q.top()<<" ";
                st.push(q.top());
                q.pop();
            }
            cout<<endl;
        }
      }
      else if(s=="pop") st.pop();
      else{
         int n;
         cin>>n;
         st.push(n);
      }
    }
}