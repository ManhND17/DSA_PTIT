#include<bits/stdc++.h>
using namespace std;
main()
{
     int b[10]={1,2,5,10,20,50,100,200,500,1000};
     int a[100001]={};
     for(int i=1;i<=100000;i++)
    {
        a[i]=1e9;
        for(int j=0;j<10;j++)
        {
            if(i==b[j])
            {
                a[i]=1;
                break;
            }
            if(i-b[j]>0&&a[i-b[j]]>0)
            {
                a[i]=min(a[i],a[i-b[j]]+1);
            }
        }
    }
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
     cout<<a[n]<<endl;
    }
}