#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<long long> st;
        st.push(9);
        while(st.size())
        {
          long long k=st.front();
          st.pop();
          if(k%n==0) 
          {
            cout<<k<<endl;
            break;
          }
          else{
            st.push(k*10);
            st.push(k*10+9);
          }
        }
    }
}