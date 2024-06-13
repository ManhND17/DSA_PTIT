#include<bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<long long> a(n);
		vector<long long> b(n);

		map<long long , int> mp;

		int pos = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}


		for (int i = 0; i < n - 1; i++) {
			cin >> b[i];
			mp[b[i]]++;
		}

		for (int i = 0; i < n; i++) {
			if (mp[a[i]] == 1) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
}