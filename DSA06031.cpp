#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long max=0;
        for(int i=0;i<k;i++)
        {
          if(max<a[i]) max=a[i];
        }
        cout<<max<<" ";
        for(int i=k;i<n;i++)
        {
            if(a[i]>max) max=a[i];
            else{
                if(a[i-k]==max)
                {
                    max=0;
                    for(int j=i-k+1;j<=i;j++)
                    {
                        if(max<a[j]) max=a[j];
                    }
                } 
            }
            cout<<max<<" ";
        }
        cout<<endl;

    }
}