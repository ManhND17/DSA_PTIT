#include<bits/stdc++.h>
using namespace std;
long long tinh(string a,int k)
{
    long long s=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int x=a[i]-'0';
        s+=x*pow(k,a.size()-1-i);
    }
    return s;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
       int k;
       string a,b;
       cin>>k>>a>>b;
       long long s=tinh(a,k)+tinh(b,k);
       vector<int> v;
       while(s>0)
       {
        v.push_back(s%k);
        s/=k;
       }     
       for(int i=v.size()-1;i>=0;i--)
       {
        cout<<v[i];
       }           
       cout<<endl;                                                     
    }
}