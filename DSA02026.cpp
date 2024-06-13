#include<bits/stdc++.h>
using namespace std;
char op[2]={'+','-'};
bool flag=false;
string ans="";
string s;
void check(string s)
{
    int a=stoi(s.substr(0,2));
    int b=stoi(s.substr(5,2));
    string c=s.substr(10,2);
    if(s[3]=='+'&&to_string(a+b)==c||s[3]=='-'&&to_string(a-b)==c)
    {
        ans=s;
        flag=true;
    }
}
void Try(int i,string s)
{
    if(flag) return;
    if(s[i]=='?')
    {
        if(i==3)
        {
            for(int j=0;j<=1;j++)
            {
                s[i]=op[j];
                if(i==s.size()-1) check(s);
                else Try(i+1,s);
            }
        }
        else if(i==0||i==5||i==10)
        {
         for (char j = '1'; j <= '9'; j++) {
				s[i] = j;
				if (i == s.length() - 1) check(s);
				else Try(i + 1, s);
			}
        }
        else{
            for (char j = '0'; j <= '9'; j++) {
				s[i] = j;
				if (i == s.length() - 1) check(s);
				else Try(i + 1, s);
			}
        }
    }
    else{
        if(i==s.size()-1) check(s);
        else Try(i+1,s);
    }
}
main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        flag=false;
        if(s[3]=='/'||s[3]=='*') cout<<"WRONG PROBLEM!\n";
        else{
            Try(0, s);
			if (flag)
			cout << ans << endl;
			else cout << "WRONG PROBLEM!" << endl;
        }
    }
}                        