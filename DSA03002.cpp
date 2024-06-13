#include<bits/stdc++.h>
using namespace std;
long five(string s)
{
    long n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='6') s[i]='5';
        n=n*10+(s[i]-'0');
    }
    return n;
}
long six(string s)
{
    long n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='5') s[i]='6';
        n=n*10+(s[i]-'0');
    }
    return n;
}
main()
{
    string a,b;
    cin>>a>>b;
    cout<<five(a)+five(b)<<" "<<six(a)+six(b);
}