#include<bits/stdc++.h>
using namespace std;
// Y tuong tim vi tri ben trai ben phai cua a[i]
// lon hon hoac bang a[i]
main()
{
    int t; cin>>t;
    const int SIZE = 100000;
    int a[SIZE];
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> L;
        stack<int> R;
        int l[SIZE];
        int r[SIZE];
        L.push(0);
        for(int i=0;i<n;i++)
        {
            while(L.size()&&a[L.top()]>=a[i])
            {
                L.pop();
            }
            if(L.empty()){
                l[i]=0;
            }
            else l[i]=L.top()+1;
            L.push(i);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(R.size()&&a[R.top()]>=a[i])
            {
                R.pop();
            }
            if(R.empty()) r[i]=n-1;
            else r[i]=R.top()-1;
            R.push(i);
        }
        long long res=0;
        for(int i=0;i<n;i++)
        {
            res=max((long long)((r[i]-l[i]+1)*a[i]),res);
        }
        cout<<res<< endl;
    }
}