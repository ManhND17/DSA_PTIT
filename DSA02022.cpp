#include<bits/stdc++.h>
using namespace std;
int a[9];
int check()
{
    if(a[5]==0||a[3]==1) return 0;
    if(a[1]==0&&a[2]==0||a[3]==0&&a[4]==0) return 0;
    return 1;
}
void in()
{
    if(check()){
    for(int i=1;i<=8;i++)
    {
     if(a[i]==0) cout<<"0";
     else cout<<"2";
     if(i==2||i==4) cout<<"/";
    }
    cout<<endl;
    }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
      a[i]=j;
      if(i==8) in();
      else Try(i+1);
    }
}
main()
{
    Try(1);
}