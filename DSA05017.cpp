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
        vector<long> f_left(n,0);
        vector<long> f_right(n,0);
        f_left[0]=a[0];
        f_right[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            f_right[i]=a[i];
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j]&&f_right[i]<f_right[j]+a[i])
                {
                    f_right[i]=f_right[j]+a[i]; 
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            f_left[i]=a[i];
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]&&f_left[i]<f_left[j]+a[i])
                {
                    f_left[i]=f_left[j]+a[i];
                }
            }
        }
        long res=-1;
        for(int i=0;i<n;i++)
        {
           res=max(res,f_left[i]+f_right[i]-a[i]);
        }
        cout<<res<<endl;

    }
}