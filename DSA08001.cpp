#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;queue<int> qe;
        while(n--)
        {
         int x; cin>>x;
         
         if(x==1) cout<<qe.size()<<endl;
         if(x==2){
            if(qe.empty()) cout<<"YES\n";
            else cout<<"NO\n";
         }
         if(x==3)
         {
            int k; cin>>k;
            qe.push(k);
         }
         if(x==4){
            if(qe.size()) qe.pop();
         }
         if(x==5){
            if(qe.size()) cout<<qe.front()<<endl;
            else cout<<"-1\n";
         }
         if(x==6){
            if(qe.size()) cout<<qe.back()<<endl;
            else cout<<"-1\n";
         }
        }
    }
}