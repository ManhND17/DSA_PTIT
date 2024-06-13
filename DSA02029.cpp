#include<bits/stdc++.h>
using namespace std;
void thaphanoi(int n,char a,char b,char c)
{
   if(n==1) {cout<<a<<" -> "<<c<<endl;
   return;}
   thaphanoi(n-1,a,c,b);
   thaphanoi(1,a,b,c);
   thaphanoi(n-1,b,a,c);
}
main()
{
    int n; cin>>n;
    thaphanoi(n,'A','B','C');
}