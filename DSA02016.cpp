#include<bits/stdc++.h>
using namespace std;
int n;
int cot[200]={0};
int cheo_chinh[200]={0};
int cheo_phu[200]={0};
int cnt=0;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!cot[j]&&!cheo_chinh[i-j+n]&&!cheo_phu[i+j-1])
        {
            cot[j]=1;
            cheo_chinh[i-j+n]=1;
            cheo_phu[j+i-1]=1;
            if(i==n) cnt++;
            else Try(i+1);
            cot[j]=0;
            cheo_chinh[i-j+n]=0;
            cheo_phu[j+i-1]=0;
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        Try(1);
        cout<<cnt<<endl;
    }
}