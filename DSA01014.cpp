#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int x[11];
int dem=0;
void in()
{
    int tong=0;
    for(int i=1;i<=k;i++)
    {
        tong+=x[i];
    }
    if(tong==s) dem++;
}
bool ss=false;
void sinh()
{
    int i=k;
    while(x[i]==n-k+i&&i>0){
        i--;
    }
    if(i==0) ss=true;
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++)
        {
            x[j]=x[j-1]+1;
        }
    }
}
main()
{
    bool ok=false;
    while(!ok)
    {
        cin>>n>>k>>s;
        for(int i=1;i<=k;i++)
        {
            x[i]=i;
        }
        if(n<k) cout<<"0\n";
        else{
        if(n==0&&k==0&&s==0) break;
        ss=false;
        dem=0;
        while(!ss)
        {
            in();
            sinh();
        }
        cout<<dem<<endl;
        }
    }
}