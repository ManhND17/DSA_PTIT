#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
main()
{
    int n; cin>>n;
    long a[n];
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0) b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end(),cmp);
    int i=0,k=min(b.size(),c.size());
    while(i<k)
    {
        cout<<b[i]<<" "<<c[i]<<" ";
        i++;
    }
    if(b.size()>c.size()) cout<<b[b.size()-1];
    if(c.size()>b.size()) cout<<c[c.size()-1];
    cout<<endl;
}