#include<bits/stdc++.h>
using namespace std;
main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]<0&&v[1]<0)
    {
        long long tmp1=0,tmp2=0;
        tmp1=v[0]*v[1];
        if(v[n-1]>0) tmp1*=v[n-1];
        if(v[n-1]>0&&v[n-2]>0) {
        tmp2=v[n-1]*v[n-2];
        if(v[n-3]>0) tmp2*=v[n-3];
        }
        cout<<max(tmp1,tmp2);
    }
    else{
        int tmp=v[n-1]*v[n-2];
        if(v[n-3]>0) tmp*=v[n-3];
        cout<<tmp;
    }
}