#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;

struct Matran
{
   long long a[2][2];
   friend Matran operator * (Matran A,Matran B)
   {
    Matran res;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            res.a[i][j]=0;
            for(int k=0;k<2;k++)
            {
             (res.a[i][j]+=A.a[i][k]*B.a[k][j])%=mod;
            }
        }
    }
    return res;
   }
};
Matran LT(Matran A,long long n)
{
    if(n==1) return A;
    Matran tmp=LT(A,n/2);
    if(n%2==0) return tmp*tmp;
    else return tmp*tmp*A;
}
main()
{
    Matran X;
    X.a[0][0]=1; X.a[1][0]=1;
    X.a[0][1]=1; X.a[1][1]=0;
    int t;
    cin>>t;
    while(t--)
    {
     long long n; cin>>n;
     Matran r=LT(X,n);
     cout<<r.a[0][1]<<endl;
    }
}