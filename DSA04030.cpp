#include<bits/stdc++.h>
using namespace std;
long long n;
long long mod=1e15+7;
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
  long long a[4][4];
  Matrix()
  {
    memset(a,0,sizeof a);
  }
  Matrix operator *(const Matrix& other)
  {
    Matrix res;
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
        for(int k=0;k<4;k++)
        {
         (res.a[i][j]+=prod(this->a[i][k],other.a[k][j]))%=mod;
        }
      }
    }
    return res;
  }
};
Matrix I;
Matrix A;
Matrix T0;
void Init()
{
   I.a[0][0]=I.a[1][1]=I.a[2][2]=I.a[3][3]=1;
   A.a[0][0]=A.a[0][1]=1;
   A.a[1][1]=A.a[1][2]=A.a[1][3]=1;
   A.a[2][1]=1;
   A.a[3][2]=1;
   T0.a[0][0] = 3;
	 T0.a[1][0] = 3;
	 T0.a[2][0] = 2;
	 T0.a[3][0] = 1;
}
Matrix Tribonaci(Matrix A,long long n)
{
  if(n==0) return I;
  if(n==1) return A;
  Matrix tmp=Tribonaci(A,n/2);
  if(n%2==0) return tmp*tmp;
  else return tmp*tmp*A;
}
main()
{
  int t; cin>>t;
  Init();
  while(t--)
  {
    cin>>n;
    if(n<=3)
    {
     long long sum=0;
     for(int i=1;i<=n;i++) sum+=i;
     cout<<sum<<endl;
    }
    else{
      Matrix res =Tribonaci(A, n - 2);
			res = res * T0;
			cout << res.a[0][0] % mod << endl;
    }
  }
}