#include<bits/stdc++.h>
using namespace std;
int n,x[11];
void in()
{
    cout<<x[1];
    for(int i=2;i<=n;i++)
    {
        if(x[i]==x[i-1]) cout<<"0";
        else cout<<"1";
    }
    cout<<" ";
}
bool ok=false;
void sinh()
{
    int i=n;
    while(x[i]==1&&i>0)
    {
        x[i]--;
        i--;
    }
    if(i==0) ok=true;
    else
    {
        x[i]=1;
    }
}

main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        ok=false;
        while(!ok)
        {
            in();
            sinh();
        }
        cout<<endl;
    }
}