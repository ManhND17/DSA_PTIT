#include<bits/stdc++.h>
using namespace std;
main()
{
    int c,n; cin>>c>>n;
    vector<int> v(n);
    vector<int> sum(c + 1, 0);
	sum[0] = 1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        for(int j=c;j>=v[i];j--)
        {
            if(sum[j-v[i]]) sum[j]=1;
        }
    }
    for(int i=c;i>=0;i--)
    {
        if(sum[i])
        {
            cout<<i<<endl;
            break;
        }
    }
}