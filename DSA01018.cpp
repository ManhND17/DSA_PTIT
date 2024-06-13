#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k+1];
        int dem=0;
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            if(a[i]==i) dem++;
        }
        if(dem==k){
            for(int j=n-k+1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            int i=k;
            while(a[i]==a[i-1]+1&&i>1)
            {
              i--;
            }
            a[i]--;
             for(int j=i+1;j<=k;j++)
             {
               a[j]=n-k+j;
             }
             for(int j=1;j<=k;j++)
             {
                cout<<a[j]<<" ";
             }
             cout<<endl;
        }
    }
}