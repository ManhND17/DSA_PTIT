#include<bits/stdc++.h>
using namespace std;
long long coso10(string s,int k)
{
    long long sum=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        int x=s[i]-'0';
        sum+=x*pow(k,s.size()-1-i);
    }
    return sum;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;
        long long x=coso10(s1,2);
        long long y=coso10(s2,2);
        cout<<x*y<<endl;
    }
}