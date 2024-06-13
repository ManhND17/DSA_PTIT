#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
long n,k;
long long prod(long long a,long long b)
{
    long long c=0;
    while(b)
    {
        if(b%2==1){
            c+=a;
            c%=mod;
        }
        a*=2;
        a%=mod;
        b/=2;
    }
    return c;
}
struct Matrix{
   long long a[10][10];
   Matrix(){
   memset(a,0,sizeof a);
   }
   Matrix operator * (Matrix& other)
   {
    Matrix c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int h=0;h<n;h++)
            {
                (c.a[i][j]+=prod(this->a[i][h],other.a[h][j]))%=mod;
            }
        }
    }
    return c;
   }
};
Matrix I;
void init()
{
    for(int i=0;i<=9;i++)
    I.a[i][i]=1;
}
Matrix LT(Matrix A,long k)
{
    if(k==0) return I;
    if(k==1) return A;
    Matrix tmp=LT(A,k/2);
    if(k%2==0) return tmp*tmp;
    else return tmp*tmp*A;
}
main()
{
    int t; cin>>t; init();
    while(t--)
    {
        cin>>n>>k;
        Matrix X;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>X.a[i][j];
        }
        Matrix A=LT(X,k);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<A.a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}