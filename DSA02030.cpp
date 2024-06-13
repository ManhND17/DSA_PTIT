#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[11];
void in()
{
    for(int i=1;i<=k;i++)
    {
        char c=a[i]+'A';
        cout<<c;
    }
    cout<<endl;
}
void Try(int i)
{
    for (int j=a[i-1];j<n;j++)
    {
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
main()
{
    char s;
    cin>>s>>k;
    n=s-'A'+1;
    Try(1);
}