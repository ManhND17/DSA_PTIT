#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        long long sum=s[0]-'0';
        for(int i=1;i<s.size();i++)
        {
            for(int j=i;j>=0;j--)
            {
                sum+=stoll(s.substr(j,i-j+1));
            }
        }
        cout<<sum<<endl;
    }
}