#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
void tinh(string s1)
{
    stringstream ss(s1);
     string s3;
     while(ss>>s3)
     {
        int hs=0;
        int mu=0;
        int j;
        for(int i=0;i<s3.size();i++)
        { 
            if(isdigit(s3[i]))
            {
                hs=hs*10+s3[i]-'0';
                j=i;
            }
            else break;
        }
        for(int i=j+4;i<s3.size();i++) mu=mu*10+s3[i]-'0';
        mp[mu]+=hs;
     }
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
     string s1; getline(cin,s1);
     string s2; getline(cin,s2);
     mp.clear();
     tinh(s1);
     tinh(s2);
     string res="";
     for(auto x:mp)
     {
        res=" + "+to_string(x.second)+"*x^"+to_string(x.first)+res;
     }
     res.erase(0,3);
     cout<<res<<endl;
     }
}