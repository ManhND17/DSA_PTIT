#include<bits/stdc++.h>
using namespace std;
long mod=1e9+7;
long n,k;

long long prod(long long a,long long b)
{
    long long c=0;
    while(b)
    {
        if(b%2==1)
        {
            c+=a;
            if(c>=mod) c-=mod;
        }
        a=a*2;
        if(a>=mod) a-=mod;
        b=b/2;
    }
    return c;
}

struct Matrix
{
   long long a[10][10];
   Matrix()
    {
        memset(a,0,sizeof a);
    }
    Matrix operator * (Matrix& other){
        Matrix res;
        for(int i=0;i<n;i++) 
        {for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
            {
                (res.a[i][j]+=prod(this->a[i][k],other.a[k][j]))%=mod;
            }
        }
        return res;
    }
};

Matrix I;
void init()
{
    for(int i=0;i<=9;i++)
    I.a[i][i]=1;
}

Matrix LT(Matrix A,long long k)
{
    if(k==0) return I;
    if(k==1) return A;
    Matrix tmp=LT(A,k/2);
    if(k%2==0) return tmp*tmp;
    return tmp*tmp*A;
}

long long showMatrix(Matrix A)
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A.a[i][n-1];
        sum%=mod;
    }
    return sum;
}
main()
{
    init();
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        Matrix X;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>X.a[i][j];
            }
        }
        Matrix Ans=LT(X,k);
        cout<<showMatrix(Ans)<<endl;
    }

}