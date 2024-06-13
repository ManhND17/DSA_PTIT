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
    bool check;
    int dem=0;
    for(int i=0;i<n;i++)
    {
        check=false;
        dem++;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                check=true;
                swap(a[j],a[j+1]);
            }
        }
        if(!check) break;
         cout<<"Buoc "<<dem<<": ";
         for(int i=0;i<n;i++)
         {
            cout<<a[i]<<" ";
         }
         cout<<endl;
    }
}