#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k+1],b[k+1];
        for(int i=1;i<=k;i++)
        {
         cin>>a[i];
         b[i]=a[i];       
        }
        int i=k;
        while(a[i]==n-k+i&&i>0)
        {
            i--;
        }
        if(i==0) cout<<k<<endl;
        else
        {
            b[i]++;
            for(int j=i+1;j<=k;j++)
            {
                b[j]=b[j-1]+1;
            }
        int dem=0;
        for(int j=1;j<=k;j++)
        {
            for(int u=1;u<=k;u++)
            {
                if(b[j]==a[u])
                {
                    dem++;
                    break;
                }
            }
        }
        cout<<k-dem<<endl;
        }
    }
}