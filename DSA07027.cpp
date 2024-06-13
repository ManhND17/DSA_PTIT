#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        long a[n];
        stack<long> st;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<long> v(n);
        for(int i=n-1;i>=0;i--)
        {
            while(st.size()&&a[i]>=st.top()) st.pop();
            if(st.size()) v[i]=st.top();
            else v[i]=-1;
            st.push(a[i]);
        }
        for(auto s:v)
        {
            cout<<s<<" ";
        }
        cout<<endl;
    }
}