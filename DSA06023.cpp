#include<bits/stdc++.h>
using namespace std;
main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int ok=0;
       for(int j=i+1;j<n;j++)
       {
        if(a[i]>a[j]) {swap(a[i],a[j]);
       ok=1;
        }
       }
       if(ok==1)
       {
       cout<<"Buoc "<<i+1<<": ";
       for(int j=0;j<n;j++)
       {
        cout<<a[j]<<" ";

       }
       cout<<endl;
       }
    }
}