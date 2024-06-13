#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<long long> qe;
        qe.push(1);
        while(qe.size())
        {
            long long k=qe.front();
            qe.pop();
            if(k%n==0)
            {
                cout<<k<<endl;
                break;
            }
            qe.push(k*10);
            qe.push(k*10+1);
        }
    }
}