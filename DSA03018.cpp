#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s="";
        int x=n/7;
        bool flag=true;
        for(int i=x;i>=0&&flag;i--)
        {
            if((n-i*7)%4==0)
            {
             int m=i;
             int h=(n-i*7)/4;
             string b="";
             string a="";
             while(i--) b+=to_string(7);
             while(h--) a+=to_string(4);
             cout<<a+b<<endl;
             flag=false;
            }
        }
        if(flag) cout<<"-1\n";
    }
}