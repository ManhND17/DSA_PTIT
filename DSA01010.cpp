#include<bits/stdc++.h>
using namespace std;
int n,k;
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[k+1],b[k+1];
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int i=k;
        int dem=0;
        while(a[i]==n-k+i&&i>0){
          i--;
        }
        if(i==0) cout<<k<<endl;
        else{
            a[i]++;
            map<int,int> mp;
            for(int j=i+1;j<=k;j++)
            {
                a[j]=a[j-1]+1;
            }
            for(int j=1;j<=k;j++)
            {
                mp[a[j]]++;
            }
            for(int j=1;j<=k;j++)
            {
                if(mp[b[j]]!=1) dem++;
            }
            cout<<dem<<endl;
        }
    }
}