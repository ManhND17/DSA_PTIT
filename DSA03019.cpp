#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;

	while (t--) {
		long long p, q;
		cin >> p >> q;

		while (true) {
			if (q % p == 0) {
				cout << 1 << "/" << q / p << endl;
				break;
			}

			long long x = q / p + 1;
			cout << 1 << "/" << x << " + ";
			p = p * x - q;
			q = q * x;
		}
	}

	return 0;
}