#include<bits/stdc++.h>
using namespace std;
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
        sort(a,a+n);
        int i=0;int j=n/2;
        int cnt=n;
        while(i<n&&j<n)
        {
            if(a[i]*2<=a[j])
            {
                cnt--;
                i++;
                j++;
            }
            else j++;
        }
        cout<<cnt<<endl;
    }
}