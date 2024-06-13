#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string x;
        getline(cin,x);
        int a[1001];
        for(int i=0;i<x.size();i++)
        {
            a[i]=x[i]-'0';
        }
        for(int i=x.size()-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                for(int j=i+1;j<x.size();j++)
                {
                    a[j]+=1;
                }
                break;
            }
        }
        int dem=0;
        for(int i=0;i<x.size();i++)
        {
           if(a[i]==0) dem++;
        }
        if(dem==x.size())
        {
            for(int i=0;i<x.size();i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
        for(int i=0;i<x.size();i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        }
    }
}