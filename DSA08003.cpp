#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t; cin.ignore();
    deque<int> qe;
    while(t--)
    {
     string s; getline(cin,s);
     if(s=="PRINTFRONT")
     {
       if(qe.size()) cout<<qe.front()<<endl;
       else cout<<"NONE\n";
     }
     else if(s=="PRINTBACK")
     {
       if(qe.size()) cout<<qe.back()<<endl;
       else cout<<"NONE\n";
     }
     else if(s=="POPBACK")
     {
       if(qe.size()) qe.pop_back();
     }
     else if(s=="POPFRONT")
     {
       if(qe.size()) qe.pop_front();
     }
     else{
        string s1="";
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i])) s1+=s[i];
            if(isdigit(s[i])) k=k*10+s[i]-'0';
        }
        if(s1=="PUSHFRONT") qe.push_front(k);
        else qe.push_back(k);
     }
    }
}