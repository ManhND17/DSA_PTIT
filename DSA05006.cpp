#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
		cin >> n;

		vector<int> v(n);

		for (auto& i : v) cin >> i;

		v.push_back(100000);

		vector<int> f(n + 1, 0);

		int res = 0;

		for (int i = n - 1; i >= 0; i--) {
			for (int j = i + 1; j <= n; j++) {
				if (v[j] > v[i] && f[j] + v[i] > f[i]) {
					f[i] = f[j] + v[i];
				}
			}
			res = max(res, f[i]);
		}

		cout << res << endl;
    }
}