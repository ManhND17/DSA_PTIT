#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> st;
        for(int i=0;i<n;i++)
        {
          while(st.size()&&a[st.top()]<=a[i])
          {
            st.pop();
          }
          if(st.empty()) cout<<i+1<<" ";
          else cout<<i-st.top()<<" ";
          st.push(i);
        }
        cout<<endl;
    }
}