#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int s,t;
        cin>>s>>t;
        queue<long long> qe;
        qe.push(t);
        int dem=0;
        while(qe.size())
        {
            long long k=qe.front();
            qe.pop();
            if(k==s) break;
            if(k%2==0&&k>s)
            {
                qe.push(k/2);
            }
            else qe.push(k+1);
            dem++;
        }
        cout<<dem<<endl;
    }
}