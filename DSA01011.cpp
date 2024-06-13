#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int a;
        string s;
        cin>>a>>s;
        int n,x[81];
        n=s.size();
        for(int i=1;i<=n;i++)
        {
            x[i]=s[i-1]-'0';
        }
        int i=n-1;
        while(x[i+1]<=x[i]&&i>0)
        {
            i--;
        }
        if(i==0){
            cout<<a<<" "<<"BIGGEST\n";
        }
        else{
        int j=n;
        while(x[j]<=x[i]){
            j--;
        }
        swap(x[i],x[j]);
        int l=i+1,r=n;
        while(l<=r)
        {
            swap(x[l],x[r]);
            l++; r--;
        }
        cout<<a<<" ";
        for(int k=1;k<=n;k++)
        {
            cout<<x[k];
        }
        cout<<endl;
        }
    }
}