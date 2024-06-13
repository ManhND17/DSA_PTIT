#include<bits/stdc++.h>
using namespace std;

int check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[k+1],b[k+1];
        for(int i=1;i<=k;i++)
        {
            cin>>b[i];
            a[i]=i;
        }
        bool ok=false;
        int dem=1;
        while(!ok)
        {
            int i=k;
            if(check(a,b,k)){
                cout<<dem<<endl;
                ok=true;
            }
            dem++;
            while(a[i]==n-k+i&&i>0)
            {
                i--;
            }
            if(i==0) ok=true;
            else{
                a[i]++;
                for(int j=i+1;j<=k;j++)
                {
                    a[j]=a[j-1]+1;
                }
            }
        }
    }
}