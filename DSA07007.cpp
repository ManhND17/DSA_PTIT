#include<bits/stdc++.h>
using namespace std;
string xoangoac(string s)
{
    s = "(" + s + ")";

	stack<string> st;


	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ')') {
			string tmp1 = "";

			while (!st.empty() && st.top() != "(") {
				tmp1 = st.top() + tmp1;
				st.pop();
			}

			st.pop();

			if (!st.empty() && st.top() == "-") {
				for (auto& x : tmp1) {
					if (x == '+') x = '-';
					else if (x == '-') x = '+';
				}
			}

			st.push(tmp1);
		}
		else
			st.push(string(1, s[i]));
	}

	return st.top();
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s,s1;
        getline(cin,s);
        getline(cin,s1);
        s=xoangoac(s);
        s1=xoangoac(s1);
        if(s==s1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}