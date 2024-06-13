#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
       long long a[n1],b[n2],c[n3];
       for(int i=0;i<n1;i++) cin>>a[i];
       for(int i=0;i<n2;i++) cin>>b[i];
       for(int i=0;i<n3;i++) cin>>c[i]; 
       vector<long long> se;
       int i=0,j=0,k=0;
       while(i<n1&&j<n2&&k<n3)
       {
        if(a[i]==b[j]&&b[j]==c[k]) se.push_back(a[i]),i++,j++,k++;
        else if(a[i]<b[j]) i++;
        else if(b[j]<c[k]) j++;
        else k++;
       }
        if(se.size()>0) 
        for(auto x : se) cout<<x<<" ";
        else cout<<-1; 
        cout<<endl;
    }
}