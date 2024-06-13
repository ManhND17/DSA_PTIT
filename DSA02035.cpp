#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[9],check[9];
string s[9];
int res=INT_MAX;
void in()
{
    int mi=INT_MAX;
    int ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        string x="";
        for(int j=1;j<=k;j++)
        {
            x+=s[i][a[j]-1];
        }
        mi=min(mi,stoi(x));
        ma=max(ma,stoi(x));
    }
    res=min(res,ma-mi);
}
void Try(int i)
{
    for(int j=1;j<=k;j++)
    {
        if(!check[j])
        {
            a[i]=j;
            check[j]=1;
            if(i==k) in();
            else Try(i+1);
            check[j]=0;
        }

    }
}                                   
main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    Try(1);
    cout<<res<<endl;
}