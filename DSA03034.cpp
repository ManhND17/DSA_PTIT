#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m, k;
		cin >> n >> m >> k;

		vector<int> a(n), b(m), c(k);

		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];
		for (int i = 0; i < k; i++) cin >> c[i];

		int i = 0, j = 0, p = 0;

		bool flag = false;

		while (i < n && j < m && p < k) {
			if (a[i] == b[j] && a[i] == c[p]) {
				cout << a[i] << " ";
				flag = true;
				i++;
				j++;
				p++;
			}

			if (!(i < n && j < m && p < k)) break;
			int tmp = max(a[i], max(b[j], c[p]));

			while (i < n && a[i] < tmp) i++;
			while (j < m && b[j] < tmp) j++;
			while (p < k && c[p] < tmp) p++;

		}

		if (!flag) cout << "NO";
		cout << endl;
    }
}