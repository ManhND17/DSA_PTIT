#include<bits/stdc++.h>
using namespace std;
string ans="1238004765",v;
string left1(string l)
{
    char tmp=l[1];
    l[1]=l[0];
    l[0]=l[3];
    l[3]=l[7];
    l[7]=l[8];
    l[8]=l[5];
    l[5]=tmp;
    return l;
}
string left2(string l)
{
    char tmp=l[1];
    l[1]=l[5];
    l[5]=l[8];
    l[8]=l[7];
    l[7]=l[3];
    l[3]=l[0];
    l[0]=tmp;
    return l;
}
string right1(string r)
{
    char tmp=r[1];
    r[1]=r[4];
    r[4]=r[8];
    r[8]=r[9];
    r[9]=r[6];
    r[6]=r[2];
    r[2]=tmp;

    return r;
}
string right2(string r)
{
    char tmp=r[1];
    r[1]=r[2];
    r[2]=r[6];
    r[6]=r[9];
    r[9]=r[8];
    r[8]=r[4];
    r[4]=tmp;
    return r;
}
map<string,int> mp;
void Try()
{
    queue<pair<string,int>> qe;
    qe.push({v,0});
    while(1)
    {
        pair<string,int> k=qe.front(); qe.pop();
        if(k.second==13) return;
        string s=left1(k.first);
        if(!mp[s])
        {
            mp[s]=k.second+1;
            qe.push({s,mp[s]});
        }
        s=right1(k.first);
        if(!mp[s])
        {
            mp[s]=k.second+1;
            qe.push({s,mp[s]});
        }
    }
}
int Solve()
{
    queue<pair<string,int>> qe;
    qe.push({ans,0});
    int res=1e9;
    while(1)
    {
        pair<string,int> k=qe.front(); qe.pop();
        if(mp[k.first]) res=min(res,mp[k.first]+k.second);
        if(k.second==13) return res;
        qe.push({right2(k.first),k.second+1});
        qe.push({left2(k.first),k.second+1});
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        v="";
        mp.clear();
        char c;
        for(int i=0;i<10;i++)
        {
            cin>>c;
            v+=c;
        }
        Try();
        cout<<Solve()<<endl;
    }
}