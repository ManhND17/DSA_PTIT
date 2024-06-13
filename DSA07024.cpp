#include<bits/stdc++.h>
using namespace std;
// y tuong tu vi tri phan tu xa nhat hai ben lon hon vi tri dang xet
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<int> l;
        stack<int> r;
        int left[n],right[n];
        for(int i=0;i<n;i++)
        {
            while(l.size()&&a[l.top()]>=a[i])
            {
                l.pop();
            }
            if(l.empty()) left[i]=0;
            else left[i]=l.top()+1;
            l.push(i);
        }   
        for(int i=n-1;i>=0;i--)
        {
            while(r.size()&&a[r.top()]>=a[i])
            {
              r.pop();
            }
            if(r.empty()) right[i]=n-1;
            else right[i]=r.top()-1;
            r.push(i);
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=right[i]-left[i]+1)
            {
             cnt=max(cnt,a[i]);
            }
        }
        cout<<cnt<<endl;
    }
}