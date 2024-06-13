#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        int d0=0,d1=0,d2=0;
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
           if(v[i]%3==0) d0++;
           else if(v[i]%3==1) d1++;
           else d2++;
        }
        sort(v.begin(),v.end(),greater<int>());
        if(d0==0)
        {
            if(d1==0&&d2<3||d2==0&&d1<3)
            {
                cout<<"-1\n";
                continue;
            }
        }
        if(d1%3!=d2%3)
        {
            if((d1-1)%3==d2%3) d1--;
            else if(d1%3==(d2-1)%3) d2--;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%3==0&&d0) cout<<v[i],d0--;
            else if(v[i]%3==1&&d1) cout<<v[i],d1--;
            else if(v[i]%3==2&&d2) cout<<v[i],d2--;
        }
        cout<<endl;
    }
}