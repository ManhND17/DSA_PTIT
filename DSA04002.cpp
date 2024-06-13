#include<bits/stdc++.h>
using namespace std;
long m=1e9+7;
long long powMOD(long long n,long long k)
{
    if(k==0) return 1;
    long long x=powMOD(n,k/2);
    if(k%2==0) return x*x%m;
    else return n*(x*x%m)%m;
}
long long rev(long long n)
{   long long d=0;
	while(n>0)
	{
		d=d*10+n%10;
		n/=10;
	}
	return d;
}
main()
{
	int t; cin>>t;
	while(t--)
	{
		long long n; cin>>n;
		cout<<powMOD(n,rev(n))<<endl;
	}
}
