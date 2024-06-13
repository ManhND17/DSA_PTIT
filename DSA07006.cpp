#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
vector<string> v1;
int f[100001];
string s;
map<string,bool> isChecked;
void In()
{
    string res="";
    for(int i=0;i<s.size();i++)
    {
        if(a[f[i]]) continue;
        res+=s[i];
    };
    if(res.size()!=s.size()&&!isChecked[res])
    {
      v1.push_back(res);
      isChecked[res]=true;
    }
}
void Try(int i)
{
 for(int j=0;j<=1;j++)
 {
  a[i]=j;
  if(i==n) In();
  else Try(i+1);
 }
}
main()
{
   n=0;
   cin>>s;
   stack<int> st;
   for(int i=0;i<s.size();i++)
   {
     if(s[i]=='(') st.push(i);
     if(s[i]==')')
     {
      int r=i;
      int l=st.top();
      n++;
      f[r]=n;
      f[l]=n;
      st.pop();
     }
   }
   Try(1);
   sort(v1.begin(),v1.end());
   for(auto x:v1)
   {
    cout<<x<<endl;
   }
}