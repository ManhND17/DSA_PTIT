#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
main()
{
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int dem=0;
for(int i=0;i<n-1;i++)
{
     int min=a[i],cnt=i;
        for(int j=i+1;j<n;j++)
        {
           if(a[j]<min) {
            min=a[j];
            cnt=j;
           }
        }
        if(cnt!=i) swap(a[i],a[cnt]);
        dem++;
        cout<<"Buoc "<<dem<<": ";
        for(int j=0;j<n;j++)
        {
           cout<<a[j]<<" ";
        }
        cout<<endl;
}
}