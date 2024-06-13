#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<string> qe;
        vector<string> v;
        qe.push("6");
        qe.push("8");
        while(qe.size())
        {
           string k=qe.front();
           v.push_back(k);
           qe.pop();
           if(k.size()<n){
            qe.push(k+"6");
            qe.push(k+"8");
           }
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}