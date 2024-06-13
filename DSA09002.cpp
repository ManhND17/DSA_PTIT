#include<bits/stdc++.h>
using namespace std;
main()
{
    int n; cin>>n; cin.ignore();
    for(int i=1;i<=n;i++)
    {
      string s;
      getline(cin,s);
      stringstream ss(s);
      string num;
      while(ss>>num)
      {
        if(stoi(num)>i)
        {
            cout<<i<<" "<<stoi(num)<<endl;
        }
      }
    }
}