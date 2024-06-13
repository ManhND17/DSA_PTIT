#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        int remain=0;
        bool check=true;
        for(int i=1;i<=s&&check;i++)
        {
            remain=i*n-(i/7)*n-m*s;
            if(remain>=0)
            {
                check=false;
                cout<<i-i/7<<endl;
            }
        }
        if(check) cout<<"-1"<<endl;
    }
}