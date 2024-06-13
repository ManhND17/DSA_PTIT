#include<bits/stdc++.h>
using namespace std;
vector<int> v(7);
vector<int> b(7);
vector<int> Trai(vector<int> a)
{
    vector<int> res(7);
    res[1]=a[4]; res[2]=a[1]; res[3]=a[3];
    res[4]=a[5]; res[5]=a[2]; res[6]=a[6];
    return res;
}
vector<int> Phai(vector<int> a)
{
    vector<int> res(7);
    res[1]=a[1]; res[2]=a[5]; res[3]=a[2];
    res[4]=a[4]; res[5]=a[6]; res[6]=a[3];
    return res;
}
int check(vector<int> a,vector<int> b)
{
    for(int i=1;i<=6;i++)
    {
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
void BFS(vector<int> v,vector<int> b)
{
    queue<pair<vector<int>,int>> qe;
    set<vector<int>> se;
    se.insert(v);
    qe.push({v,0});
    while(qe.size())
    {
        pair<vector<int>,int> it=qe.front();
        qe.pop();
        if(check(it.first,b))
        {
            cout<<it.second<<endl;
            break;
        }
        vector<int> L=Trai(it.first);
        if(se.count(L)==0)
        {
            qe.push({L,it.second+1});
            se.insert(L);
        }
        vector<int> R=Phai(it.first);
        if(se.count(R)==0)
        {
            qe.push({R,it.second+1});
            se.insert(R);
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        for(int i=1;i<=6;i++) cin>>v[i];
        for(int i=1;i<=6;i++) cin>>b[i];
        BFS(v,b);
    }
}