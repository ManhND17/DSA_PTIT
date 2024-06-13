#include<bits/stdc++.h>
using namespace std;
int a[9][9];
int cot[9]={0};
int chinh[9]={0};
int phu[9]={0};
int cnt=0;
void Try(int i,int tong)
{
    for(int j=1;j<=8;j++)
    {
        if(i==9)
        {
            cnt=max(cnt,tong);
        }
        if(!cot[j]&&!chinh[i-j+8]&&!phu[i+j-1])
        {
            cot[j]=1;
            chinh[i-j+8]=1;
            phu[i+j-1]=1;
            Try(i+1,tong+a[i][j]);
            cot[j]=0;
            chinh[i-j+8]=0;
            phu[i+j-1]=0;
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                cin>>a[i][j];
            }
        }
        cnt=0;
        Try(1,0);
        cout<<cnt<<endl;
    }
}